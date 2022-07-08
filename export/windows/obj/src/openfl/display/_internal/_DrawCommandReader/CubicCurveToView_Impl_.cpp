#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_CubicCurveToView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/CubicCurveToView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0ba6d328ffc5047f_472__new,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_","_new",0x26a29d63,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",472,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_0ba6d328ffc5047f_481_get_controlX1,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_","get_controlX1",0xeefd450b,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_.get_controlX1","openfl/display/_internal/DrawCommandReader.hx",481,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_0ba6d328ffc5047f_488_get_controlY1,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_","get_controlY1",0xeefd45ea,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_.get_controlY1","openfl/display/_internal/DrawCommandReader.hx",488,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_0ba6d328ffc5047f_495_get_controlX2,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_","get_controlX2",0xeefd450c,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_.get_controlX2","openfl/display/_internal/DrawCommandReader.hx",495,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_0ba6d328ffc5047f_502_get_controlY2,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_","get_controlY2",0xeefd45eb,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_.get_controlY2","openfl/display/_internal/DrawCommandReader.hx",502,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_0ba6d328ffc5047f_509_get_anchorX,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_","get_anchorX",0x267ea898,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_.get_anchorX","openfl/display/_internal/DrawCommandReader.hx",509,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_0ba6d328ffc5047f_516_get_anchorY,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_","get_anchorY",0x267ea899,"openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_.get_anchorY","openfl/display/_internal/DrawCommandReader.hx",516,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void CubicCurveToView_Impl__obj::__construct() { }

Dynamic CubicCurveToView_Impl__obj::__CreateEmpty() { return new CubicCurveToView_Impl__obj; }

void *CubicCurveToView_Impl__obj::_hx_vtable = 0;

Dynamic CubicCurveToView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CubicCurveToView_Impl__obj > _hx_result = new CubicCurveToView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CubicCurveToView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x262b773a;
}

 ::openfl::display::_internal::DrawCommandReader CubicCurveToView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_0ba6d328ffc5047f_472__new)
HXDLIN( 472)		 ::openfl::display::_internal::DrawCommandReader this1 = d;
HXDLIN( 472)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,_new,return )

Float CubicCurveToView_Impl__obj::get_controlX1( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_0ba6d328ffc5047f_481_get_controlX1)
HXDLIN( 481)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_controlX1,return )

Float CubicCurveToView_Impl__obj::get_controlY1( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_0ba6d328ffc5047f_488_get_controlY1)
HXDLIN( 488)		return this1->buffer->f->__get((this1->fPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_controlY1,return )

Float CubicCurveToView_Impl__obj::get_controlX2( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_0ba6d328ffc5047f_495_get_controlX2)
HXDLIN( 495)		return this1->buffer->f->__get((this1->fPos + 2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_controlX2,return )

Float CubicCurveToView_Impl__obj::get_controlY2( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_0ba6d328ffc5047f_502_get_controlY2)
HXDLIN( 502)		return this1->buffer->f->__get((this1->fPos + 3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_controlY2,return )

Float CubicCurveToView_Impl__obj::get_anchorX( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_0ba6d328ffc5047f_509_get_anchorX)
HXDLIN( 509)		return this1->buffer->f->__get((this1->fPos + 4));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_anchorX,return )

Float CubicCurveToView_Impl__obj::get_anchorY( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_0ba6d328ffc5047f_516_get_anchorY)
HXDLIN( 516)		return this1->buffer->f->__get((this1->fPos + 5));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_anchorY,return )


CubicCurveToView_Impl__obj::CubicCurveToView_Impl__obj()
{
}

bool CubicCurveToView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_anchorX") ) { outValue = get_anchorX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_anchorY") ) { outValue = get_anchorY_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_controlX1") ) { outValue = get_controlX1_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_controlY1") ) { outValue = get_controlY1_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_controlX2") ) { outValue = get_controlX2_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_controlY2") ) { outValue = get_controlY2_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CubicCurveToView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CubicCurveToView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CubicCurveToView_Impl__obj::__mClass;

static ::String CubicCurveToView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_controlX1",4d,dd,9c,4e),
	HX_("get_controlY1",2c,de,9c,4e),
	HX_("get_controlX2",4e,dd,9c,4e),
	HX_("get_controlY2",2d,de,9c,4e),
	HX_("get_anchorX",5a,4c,9c,88),
	HX_("get_anchorY",5b,4c,9c,88),
	::String(null())
};

void CubicCurveToView_Impl__obj::__register()
{
	CubicCurveToView_Impl__obj _hx_dummy;
	CubicCurveToView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.CubicCurveToView_Impl_",ac,d7,41,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CubicCurveToView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CubicCurveToView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CubicCurveToView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubicCurveToView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubicCurveToView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
