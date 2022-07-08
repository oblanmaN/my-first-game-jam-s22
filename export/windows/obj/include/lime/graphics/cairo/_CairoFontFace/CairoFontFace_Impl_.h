#ifndef INCLUDED_lime_graphics_cairo__CairoFontFace_CairoFontFace_Impl_
#define INCLUDED_lime_graphics_cairo__CairoFontFace_CairoFontFace_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoFontFace,CairoFontFace_Impl_)

namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFontFace{


class HXCPP_CLASS_ATTRIBUTES CairoFontFace_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CairoFontFace_Impl__obj OBJ_;
		CairoFontFace_Impl__obj();

	public:
		enum { _hx_ClassId = 0x034e8697 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_"); }

		inline static ::hx::ObjectPtr< CairoFontFace_Impl__obj > __new() {
			::hx::ObjectPtr< CairoFontFace_Impl__obj > __this = new CairoFontFace_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CairoFontFace_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			CairoFontFace_Impl__obj *__this = (CairoFontFace_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CairoFontFace_Impl__obj), false, "lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_"));
			*(void **)__this = CairoFontFace_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CairoFontFace_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CairoFontFace_Impl_",34,3a,95,c0); }

		static  ::Dynamic _new();
		static ::Dynamic _new_dyn();

		static int status( ::Dynamic this1);
		static ::Dynamic status_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFontFace

#endif /* INCLUDED_lime_graphics_cairo__CairoFontFace_CairoFontFace_Impl_ */ 
