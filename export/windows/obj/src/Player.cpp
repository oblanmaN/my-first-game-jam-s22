#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_13_new,"Player","new",0x8d5554f3,"Player.new","Player.hx",13,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_1[] = {
	(int)2,(int)3,
};
static const int _hx_array_data_6c4d5f81_2[] = {
	(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_27_update,"Player","update",0xf1f8df56,"Player.update","Player.hx",27,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_34_updateMovement,"Player","updateMovement",0xab7266a5,"Player.updateMovement","Player.hx",34,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_5[] = {
	(int)38,
};
static const int _hx_array_data_6c4d5f81_6[] = {
	(int)40,
};
static const int _hx_array_data_6c4d5f81_7[] = {
	(int)37,
};
static const int _hx_array_data_6c4d5f81_8[] = {
	(int)39,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_10_boot,"Player","boot",0x156e003f,"Player.boot","Player.hx",10,0xa27fc9dd)

void Player_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_13_new)
HXLINE(  14)		super::__construct(x,y,null());
HXLINE(  16)		this->loadGraphic(HX_("assets/images/player.png",87,88,81,c6),true,16,16,null(),null());
HXLINE(  17)		this->setGraphicSize(48,null());
HXLINE(  18)		this->_facingFlip->set(1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),true)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  19)		this->_facingFlip->set(16, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),false)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  20)		this->animation->add(HX_("run",4b,e7,56,00),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_1,2),2,false,null(),null());
HXLINE(  21)		this->animation->add(HX_("idle",14,a7,b3,45),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_2,1),6,false,null(),null());
HXLINE(  23)		 ::flixel::math::FlxPoint _hx_tmp = this->drag;
HXDLIN(  23)		_hx_tmp->set_x(this->drag->set_y(( (Float)(1600) )));
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33e526a5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x33e526a5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Player_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_27_update)
HXLINE(  28)		this->updateMovement();
HXLINE(  30)		this->super::update(elapsed);
            	}


void Player_obj::updateMovement(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_34_updateMovement)
HXLINE(  36)		bool up = false;
HXLINE(  37)		bool down = false;
HXLINE(  38)		bool left = false;
HXLINE(  39)		bool right = false;
HXLINE(  41)		up = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_5,1),1);
HXLINE(  42)		down = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_6,1),1);
HXLINE(  43)		left = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_7,1),1);
HXLINE(  44)		right = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_8,1),1);
HXLINE(  46)		bool _hx_tmp;
HXDLIN(  46)		bool _hx_tmp1;
HXDLIN(  46)		bool _hx_tmp2;
HXDLIN(  46)		if (!(up)) {
HXLINE(  46)			_hx_tmp2 = down;
            		}
            		else {
HXLINE(  46)			_hx_tmp2 = true;
            		}
HXDLIN(  46)		if (!(_hx_tmp2)) {
HXLINE(  46)			_hx_tmp1 = left;
            		}
            		else {
HXLINE(  46)			_hx_tmp1 = true;
            		}
HXDLIN(  46)		if (!(_hx_tmp1)) {
HXLINE(  46)			_hx_tmp = right;
            		}
            		else {
HXLINE(  46)			_hx_tmp = true;
            		}
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  48)			Float newAngle = ( (Float)(0) );
HXLINE(  49)			if (up) {
HXLINE(  51)				newAngle = ( (Float)(-90) );
HXLINE(  52)				if (left) {
HXLINE(  53)					newAngle = (newAngle - ( (Float)(45) ));
            				}
            				else {
HXLINE(  54)					if (right) {
HXLINE(  55)						newAngle = (newAngle + 45);
            					}
            				}
            			}
            			else {
HXLINE(  57)				if (down) {
HXLINE(  59)					newAngle = ( (Float)(90) );
HXLINE(  60)					if (left) {
HXLINE(  61)						newAngle = (newAngle + 45);
            					}
            					else {
HXLINE(  62)						if (right) {
HXLINE(  63)							newAngle = (newAngle - ( (Float)(45) ));
            						}
            					}
            				}
            				else {
HXLINE(  65)					if (left) {
HXLINE(  67)						newAngle = ( (Float)(180) );
HXLINE(  68)						this->set_facing(1);
            					}
            					else {
HXLINE(  70)						if (right) {
HXLINE(  72)							newAngle = ( (Float)(0) );
HXLINE(  73)							this->set_facing(16);
            						}
            					}
            				}
            			}
HXLINE(  77)			this->velocity->set(((Float)200),0);
HXLINE(  78)			 ::flixel::math::FlxPoint _hx_tmp = this->velocity;
HXDLIN(  78)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN(  78)			point->_inPool = false;
HXDLIN(  78)			 ::flixel::math::FlxPoint point1 = point;
HXDLIN(  78)			point1->_weak = true;
HXDLIN(  78)			_hx_tmp->rotate(point1,newAngle);
HXLINE(  81)			bool _hx_tmp1;
HXDLIN(  81)			bool _hx_tmp2;
HXDLIN(  81)			if ((this->velocity->x == 0)) {
HXLINE(  81)				_hx_tmp2 = (this->velocity->y != 0);
            			}
            			else {
HXLINE(  81)				_hx_tmp2 = true;
            			}
HXDLIN(  81)			if (_hx_tmp2) {
HXLINE(  81)				_hx_tmp1 = (this->touching == 0);
            			}
            			else {
HXLINE(  81)				_hx_tmp1 = false;
            			}
HXDLIN(  81)			if (_hx_tmp1) {
HXLINE(  83)				switch((int)(this->facing)){
            					case (int)1: case (int)16: {
HXLINE(  86)						this->animation->play(HX_("run",4b,e7,56,00),null(),null(),null());
            					}
            					break;
            					default:{
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,updateMovement,(void))

Float Player_obj::SPEED;


::hx::ObjectPtr< Player_obj > Player_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Player_obj > Player_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Player_obj *__this = (Player_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Player_obj::Player_obj()
{
}

::hx::Val Player_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateMovement") ) { return ::hx::Val( updateMovement_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Player_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Player_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Player_obj::SPEED,HX_("SPEED",67,cf,57,ff)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	HX_("updateMovement",58,78,61,35),
	::String(null()) };

static void Player_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::SPEED,"SPEED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Player_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::SPEED,"SPEED");
};

#endif

::hx::Class Player_obj::__mClass;

static ::String Player_obj_sStaticFields[] = {
	HX_("SPEED",67,cf,57,ff),
	::String(null())
};

void Player_obj::__register()
{
	Player_obj _hx_dummy;
	Player_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Player",81,5f,4d,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Player_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Player_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Player_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Player_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Player_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_10_boot)
HXDLIN(  10)		SPEED = ((Float)200);
            	}
}

