package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.math.FlxVelocity;

class TorturedSoul extends FlxSprite
{
	static inline var SPEED:Float = 130;
	static inline var ACCEL:Float = 300;
	static inline var DECEL:Float = 30;
	static inline var JUMP_STRENGTH:Float = 150;

	var brain:FSM;
	var idleTimer:Float;
	var moveDirection:Float;
	var seesPlayer:Bool;
	var playerPosition:FlxPoint;

	public function new(x:Float, y:Float)
	{
		super(x, y);

		loadGraphic(AssetPaths.tortured_soul__png, true, 16, 16);
		setFacingFlip(LEFT, false, false);
		setFacingFlip(RIGHT, true, false);
		animation.add("run", [1, 2], 6, false);
		animation.add("idle", [0], 6, false);

		drag.x = DECEL;
		acceleration.y = 300;

		brain = new FSM(idle);
		idleTimer = 0;
		playerPosition = FlxPoint.get();
	}

	override public function update(elapsed:Float)
	{
		if ((velocity.x != 0 || velocity.y != 0))
		{
			if (velocity.x < 0)
				facing = LEFT;
			else
				facing = RIGHT;

			switch (facing)
			{
				case LEFT, RIGHT:
					animation.play("run");
				case _:
			}
		}
		else
		{
			animation.play("idle");
		}

		brain.update(elapsed);

		super.update(elapsed);
	}

	function idle(elapsed:Float)
	{
		if (idleTimer <= 0)
		{
			if (FlxG.random.bool(1))
			{
				moveDirection = -1;
				velocity.x = velocity.y = 0;
			}
			else
			{
				moveDirection = FlxG.random.int(0, 8) * 45;

				velocity.set(SPEED * 0.5, 0);
				velocity.rotate(FlxPoint.weak(), moveDirection);
			}
			idleTimer = FlxG.random.int(1, 4);
		}
		else
			idleTimer -= elapsed;
	}
}
