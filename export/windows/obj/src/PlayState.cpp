#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_6_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",6,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_11_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",11,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_20_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",20,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_6_new)
HXDLIN(   6)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_11_create)
HXLINE(  12)		this->player =  ::Player_obj::__alloc( HX_CTX ,20,20);
HXLINE(  13)		this->add(this->player);
HXLINE(  15)		this->super::create();
            	}


void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_20_update)
HXDLIN(  20)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(player,"player");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return ::hx::Val( player ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast<  ::Player >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("player",61,eb,b8,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Player */ ,(int)offsetof(PlayState_obj,player),HX_("player",61,eb,b8,37)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("player",61,eb,b8,37),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

