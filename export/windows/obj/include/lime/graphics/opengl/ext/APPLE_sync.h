#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_sync
#define INCLUDED_lime_graphics_opengl_ext_APPLE_sync

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7969c112b28ce208_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,APPLE_sync)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES APPLE_sync_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef APPLE_sync_obj OBJ_;
		APPLE_sync_obj();

	public:
		enum { _hx_ClassId = 0x4865fa4e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.APPLE_sync")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.APPLE_sync"); }

		inline static ::hx::ObjectPtr< APPLE_sync_obj > __new() {
			::hx::ObjectPtr< APPLE_sync_obj > __this = new APPLE_sync_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< APPLE_sync_obj > __alloc(::hx::Ctx *_hx_ctx) {
			APPLE_sync_obj *__this = (APPLE_sync_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(APPLE_sync_obj), false, "lime.graphics.opengl.ext.APPLE_sync"));
			*(void **)__this = APPLE_sync_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7969c112b28ce208_4_new)
HXLINE(  21)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->TIMEOUT_IGNORED_APPLE = -1;
HXLINE(  20)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_FLUSH_COMMANDS_BIT_APPLE = 1;
HXLINE(  19)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->WAIT_FAILED_APPLE = 37149;
HXLINE(  18)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->CONDITION_SATISFIED_APPLE = 37148;
HXLINE(  17)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->TIMEOUT_EXPIRED_APPLE = 37147;
HXLINE(  16)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->ALREADY_SIGNALED_APPLE = 37146;
HXLINE(  15)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SIGNALED_APPLE = 37145;
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->UNSIGNALED_APPLE = 37144;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_GPU_COMMANDS_COMPLETE_APPLE = 37143;
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_FENCE_APPLE = 37142;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_FLAGS_APPLE = 37141;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_STATUS_APPLE = 37140;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_CONDITION_APPLE = 37139;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->OBJECT_TYPE_APPLE = 37138;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->MAX_SERVER_WAIT_TIMEOUT_APPLE = 37137;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_OBJECT_APPLE = 35411;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~APPLE_sync_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("APPLE_sync",c0,e6,8c,8c); }

		int SYNC_OBJECT_APPLE;
		int MAX_SERVER_WAIT_TIMEOUT_APPLE;
		int OBJECT_TYPE_APPLE;
		int SYNC_CONDITION_APPLE;
		int SYNC_STATUS_APPLE;
		int SYNC_FLAGS_APPLE;
		int SYNC_FENCE_APPLE;
		int SYNC_GPU_COMMANDS_COMPLETE_APPLE;
		int UNSIGNALED_APPLE;
		int SIGNALED_APPLE;
		int ALREADY_SIGNALED_APPLE;
		int TIMEOUT_EXPIRED_APPLE;
		int CONDITION_SATISFIED_APPLE;
		int WAIT_FAILED_APPLE;
		int SYNC_FLUSH_COMMANDS_BIT_APPLE;
		int TIMEOUT_IGNORED_APPLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_APPLE_sync */ 
