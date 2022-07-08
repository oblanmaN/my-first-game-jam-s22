#include <hxcpp.h>

#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_FlashAudioContext
#include <lime/media/FlashAudioContext.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7dd59041b290264e_10_new,"lime.media.FlashAudioContext","new",0x3c697ef8,"lime.media.FlashAudioContext.new","lime/media/FlashAudioContext.hx",10,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_19_createBuffer,"lime.media.FlashAudioContext","createBuffer",0xd5e5bb84,"lime.media.FlashAudioContext.createBuffer","lime/media/FlashAudioContext.hx",19,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_32_getBytesLoaded,"lime.media.FlashAudioContext","getBytesLoaded",0x899ee242,"lime.media.FlashAudioContext.getBytesLoaded","lime/media/FlashAudioContext.hx",32,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_44_getBytesTotal,"lime.media.FlashAudioContext","getBytesTotal",0x5b979027,"lime.media.FlashAudioContext.getBytesTotal","lime/media/FlashAudioContext.hx",44,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_56_getID3,"lime.media.FlashAudioContext","getID3",0xc9c2a18a,"lime.media.FlashAudioContext.getID3","lime/media/FlashAudioContext.hx",56,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_68_getIsBuffering,"lime.media.FlashAudioContext","getIsBuffering",0x7fe4a20a,"lime.media.FlashAudioContext.getIsBuffering","lime/media/FlashAudioContext.hx",68,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_80_getIsURLInaccessible,"lime.media.FlashAudioContext","getIsURLInaccessible",0x2151ec92,"lime.media.FlashAudioContext.getIsURLInaccessible","lime/media/FlashAudioContext.hx",80,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_92_getLength,"lime.media.FlashAudioContext","getLength",0x5ca8ceb4,"lime.media.FlashAudioContext.getLength","lime/media/FlashAudioContext.hx",92,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_104_getURL,"lime.media.FlashAudioContext","getURL",0xc9cbc8e1,"lime.media.FlashAudioContext.getURL","lime/media/FlashAudioContext.hx",104,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_108_close,"lime.media.FlashAudioContext","close",0xf8339c50,"lime.media.FlashAudioContext.close","lime/media/FlashAudioContext.hx",108,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_126_extract,"lime.media.FlashAudioContext","extract",0x21578fd9,"lime.media.FlashAudioContext.extract","lime/media/FlashAudioContext.hx",126,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_130_load,"lime.media.FlashAudioContext","load",0x9e9ab08e,"lime.media.FlashAudioContext.load","lime/media/FlashAudioContext.hx",130,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_140_loadCompressedDataFromByteArray,"lime.media.FlashAudioContext","loadCompressedDataFromByteArray",0xb153326e,"lime.media.FlashAudioContext.loadCompressedDataFromByteArray","lime/media/FlashAudioContext.hx",140,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_151_loadPCMFromByteArray,"lime.media.FlashAudioContext","loadPCMFromByteArray",0x78e0b7db,"lime.media.FlashAudioContext.loadPCMFromByteArray","lime/media/FlashAudioContext.hx",151,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_169_play,"lime.media.FlashAudioContext","play",0xa13d445c,"lime.media.FlashAudioContext.play","lime/media/FlashAudioContext.hx",169,0xce29ab3a)
namespace lime{
namespace media{

void FlashAudioContext_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_10_new)
            	}

Dynamic FlashAudioContext_obj::__CreateEmpty() { return new FlashAudioContext_obj; }

void *FlashAudioContext_obj::_hx_vtable = 0;

Dynamic FlashAudioContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlashAudioContext_obj > _hx_result = new FlashAudioContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlashAudioContext_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x285b571a;
}

 ::lime::media::AudioBuffer FlashAudioContext_obj::createBuffer( ::Dynamic stream, ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_19_createBuffer)
HXDLIN(  19)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlashAudioContext_obj,createBuffer,return )

int FlashAudioContext_obj::getBytesLoaded( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_32_getBytesLoaded)
HXDLIN(  32)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getBytesLoaded,return )

int FlashAudioContext_obj::getBytesTotal( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_44_getBytesTotal)
HXDLIN(  44)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getBytesTotal,return )

 ::Dynamic FlashAudioContext_obj::getID3( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_56_getID3)
HXDLIN(  56)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getID3,return )

bool FlashAudioContext_obj::getIsBuffering( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_68_getIsBuffering)
HXDLIN(  68)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getIsBuffering,return )

bool FlashAudioContext_obj::getIsURLInaccessible( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_80_getIsURLInaccessible)
HXDLIN(  80)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getIsURLInaccessible,return )

Float FlashAudioContext_obj::getLength( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_92_getLength)
HXDLIN(  92)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getLength,return )

::String FlashAudioContext_obj::getURL( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_104_getURL)
HXDLIN( 104)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getURL,return )

void FlashAudioContext_obj::close( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_108_close)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,close,(void))

Float FlashAudioContext_obj::extract( ::lime::media::AudioBuffer buffer, ::Dynamic target,Float length,::hx::Null< Float >  __o_startPosition){
            		Float startPosition = __o_startPosition.Default(-1);
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_126_extract)
HXDLIN( 126)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlashAudioContext_obj,extract,return )

void FlashAudioContext_obj::load( ::lime::media::AudioBuffer buffer, ::Dynamic stream, ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_130_load)
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlashAudioContext_obj,load,(void))

void FlashAudioContext_obj::loadCompressedDataFromByteArray( ::lime::media::AudioBuffer buffer, ::Dynamic bytes,int bytesLength){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_140_loadCompressedDataFromByteArray)
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlashAudioContext_obj,loadCompressedDataFromByteArray,(void))

void FlashAudioContext_obj::loadPCMFromByteArray( ::lime::media::AudioBuffer buffer, ::Dynamic bytes,int samples,::String format,::hx::Null< bool >  __o_stereo,::hx::Null< Float >  __o_sampleRate){
            		bool stereo = __o_stereo.Default(true);
            		Float sampleRate = __o_sampleRate.Default(44100);
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_151_loadPCMFromByteArray)
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlashAudioContext_obj,loadPCMFromByteArray,(void))

 ::Dynamic FlashAudioContext_obj::play( ::lime::media::AudioBuffer buffer,::hx::Null< Float >  __o_startTime,::hx::Null< int >  __o_loops, ::Dynamic sndTransform){
            		Float startTime = __o_startTime.Default(0);
            		int loops = __o_loops.Default(0);
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_169_play)
HXDLIN( 169)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlashAudioContext_obj,play,return )


::hx::ObjectPtr< FlashAudioContext_obj > FlashAudioContext_obj::__new() {
	::hx::ObjectPtr< FlashAudioContext_obj > __this = new FlashAudioContext_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlashAudioContext_obj > FlashAudioContext_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlashAudioContext_obj *__this = (FlashAudioContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlashAudioContext_obj), false, "lime.media.FlashAudioContext"));
	*(void **)__this = FlashAudioContext_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlashAudioContext_obj::FlashAudioContext_obj()
{
}

::hx::Val FlashAudioContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getID3") ) { return ::hx::Val( getID3_dyn() ); }
		if (HX_FIELD_EQ(inName,"getURL") ) { return ::hx::Val( getURL_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"extract") ) { return ::hx::Val( extract_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return ::hx::Val( getLength_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return ::hx::Val( createBuffer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBytesTotal") ) { return ::hx::Val( getBytesTotal_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getBytesLoaded") ) { return ::hx::Val( getBytesLoaded_dyn() ); }
		if (HX_FIELD_EQ(inName,"getIsBuffering") ) { return ::hx::Val( getIsBuffering_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getIsURLInaccessible") ) { return ::hx::Val( getIsURLInaccessible_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return ::hx::Val( loadPCMFromByteArray_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return ::hx::Val( loadCompressedDataFromByteArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlashAudioContext_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlashAudioContext_obj_sStaticStorageInfo = 0;
#endif

static ::String FlashAudioContext_obj_sMemberFields[] = {
	HX_("createBuffer",1c,fd,e9,f2),
	HX_("getBytesLoaded",da,b9,68,21),
	HX_("getBytesTotal",8f,b3,4c,a2),
	HX_("getID3",22,21,1f,a3),
	HX_("getIsBuffering",a2,79,ae,17),
	HX_("getIsURLInaccessible",2a,86,55,6d),
	HX_("getLength",1c,1e,5e,1b),
	HX_("getURL",79,48,28,a3),
	HX_("close",b8,17,63,48),
	HX_("extract",41,b5,ea,78),
	HX_("load",26,9a,b7,47),
	HX_("loadCompressedDataFromByteArray",d6,4f,5d,a0),
	HX_("loadPCMFromByteArray",73,51,e4,c4),
	HX_("play",f4,2d,5a,4a),
	::String(null()) };

::hx::Class FlashAudioContext_obj::__mClass;

void FlashAudioContext_obj::__register()
{
	FlashAudioContext_obj _hx_dummy;
	FlashAudioContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.FlashAudioContext",06,e3,98,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlashAudioContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlashAudioContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlashAudioContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlashAudioContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
