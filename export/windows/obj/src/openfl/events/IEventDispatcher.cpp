#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace openfl{
namespace events{


static ::String IEventDispatcher_obj_sMemberFields[] = {
	HX_("addEventListener",cd,0b,64,f1),
	HX_("dispatchEvent",00,c7,64,c6),
	HX_("hasEventListener",f4,2e,ea,0c),
	HX_("removeEventListener",ca,87,75,55),
	HX_("willTrigger",46,f4,3f,d8),
	::String(null()) };

::hx::Class IEventDispatcher_obj::__mClass;

void IEventDispatcher_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.IEventDispatcher",2f,f6,24,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IEventDispatcher_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x87530281 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events
