#ifndef INCLUDED_hscript_FieldKind
#define INCLUDED_hscript_FieldKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,FieldKind)
namespace hscript{


class FieldKind_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FieldKind_obj OBJ_;

	public:
		FieldKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscript.FieldKind",53,ab,36,ce); }
		::String __ToString() const { return HX_("FieldKind.",60,c5,ce,a5) + _hx_tag; }

		static ::hscript::FieldKind KFunction( ::Dynamic f);
		static ::Dynamic KFunction_dyn();
		static ::hscript::FieldKind KVar( ::Dynamic v);
		static ::Dynamic KVar_dyn();
};

} // end namespace hscript

#endif /* INCLUDED_hscript_FieldKind */ 
