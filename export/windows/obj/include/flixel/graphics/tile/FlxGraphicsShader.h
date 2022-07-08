#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#define INCLUDED_flixel_graphics_tile_FlxGraphicsShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Bool)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)

namespace flixel{
namespace graphics{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxGraphicsShader_obj : public  ::openfl::display::GraphicsShader_obj
{
	public:
		typedef  ::openfl::display::GraphicsShader_obj super;
		typedef FlxGraphicsShader_obj OBJ_;
		FlxGraphicsShader_obj();

	public:
		enum { _hx_ClassId = 0x04f93fcd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.tile.FlxGraphicsShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.tile.FlxGraphicsShader"); }
		static ::hx::ObjectPtr< FlxGraphicsShader_obj > __new();
		static ::hx::ObjectPtr< FlxGraphicsShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxGraphicsShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxGraphicsShader",42,92,31,c7); }

		 ::openfl::display::ShaderParameter_Float alpha;
		 ::openfl::display::ShaderParameter_Float colorMultiplier;
		 ::openfl::display::ShaderParameter_Float colorOffset;
		 ::openfl::display::ShaderParameter_Bool hasColorTransform;
		 ::openfl::display::ShaderParameter_Bool hasTransform;
};

} // end namespace flixel
} // end namespace graphics
} // end namespace tile

#endif /* INCLUDED_flixel_graphics_tile_FlxGraphicsShader */ 