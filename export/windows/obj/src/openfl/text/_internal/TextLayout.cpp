#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz_HB
#include <lime/text/harfbuzz/HB.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz_HBFeature
#include <lime/text/harfbuzz/HBFeature.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz_HBGlyphInfo
#include <lime/text/harfbuzz/HBGlyphInfo.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz_HBGlyphPosition
#include <lime/text/harfbuzz/HBGlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz__HBBuffer_HBBuffer_Impl_
#include <lime/text/harfbuzz/_HBBuffer/HBBuffer_Impl_.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz__HBFTFont_HBFTFont_Impl_
#include <lime/text/harfbuzz/_HBFTFont/HBFTFont_Impl_.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz__HBLanguage_HBLanguage_Impl_
#include <lime/text/harfbuzz/_HBLanguage/HBLanguage_Impl_.h>
#endif
#ifndef INCLUDED_openfl_text__internal_GlyphPosition
#include <openfl/text/_internal/GlyphPosition.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayout
#include <openfl/text/_internal/TextLayout.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_24_new,"openfl.text._internal.TextLayout","new",0xa41075de,"openfl.text._internal.TextLayout.new","openfl/text/_internal/TextLayout.hx",24,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_89___create,"openfl.text._internal.TextLayout","__create",0xba8383de,"openfl.text._internal.TextLayout.__create","openfl/text/_internal/TextLayout.hx",89,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_101___position,"openfl.text._internal.TextLayout","__position",0xa4593a0b,"openfl.text._internal.TextLayout.__position","openfl/text/_internal/TextLayout.hx",101,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_188_get_positions,"openfl.text._internal.TextLayout","get_positions",0x810b767f,"openfl.text._internal.TextLayout.get_positions","openfl/text/_internal/TextLayout.hx",188,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_200_get_direction,"openfl.text._internal.TextLayout","get_direction",0xc0f9e514,"openfl.text._internal.TextLayout.get_direction","openfl/text/_internal/TextLayout.hx",200,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_204_set_direction,"openfl.text._internal.TextLayout","set_direction",0x05ffc720,"openfl.text._internal.TextLayout.set_direction","openfl/text/_internal/TextLayout.hx",204,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_214_set_font,"openfl.text._internal.TextLayout","set_font",0x081d248e,"openfl.text._internal.TextLayout.set_font","openfl/text/_internal/TextLayout.hx",214,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_225_get_glyphs,"openfl.text._internal.TextLayout","get_glyphs",0xd5068f52,"openfl.text._internal.TextLayout.get_glyphs","openfl/text/_internal/TextLayout.hx",225,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_238_get_language,"openfl.text._internal.TextLayout","get_language",0xd7d8ef23,"openfl.text._internal.TextLayout.get_language","openfl/text/_internal/TextLayout.hx",238,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_242_set_language,"openfl.text._internal.TextLayout","set_language",0xecd21297,"openfl.text._internal.TextLayout.set_language","openfl/text/_internal/TextLayout.hx",242,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_253_get_script,"openfl.text._internal.TextLayout","get_script",0x6e0de416,"openfl.text._internal.TextLayout.get_script","openfl/text/_internal/TextLayout.hx",253,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_257_set_script,"openfl.text._internal.TextLayout","set_script",0x718b828a,"openfl.text._internal.TextLayout.set_script","openfl/text/_internal/TextLayout.hx",257,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_267_set_size,"openfl.text._internal.TextLayout","set_size",0x10b06780,"openfl.text._internal.TextLayout.set_size","openfl/text/_internal/TextLayout.hx",267,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_276_set_text,"openfl.text._internal.TextLayout","set_text",0x1156936c,"openfl.text._internal.TextLayout.set_text","openfl/text/_internal/TextLayout.hx",276,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_24_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",24,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_26_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",26,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_27_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",27,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_28_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",28,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_29_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",29,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_30_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",30,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_31_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",31,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_32_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",32,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_33_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",33,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_34_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",34,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_35_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",35,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_36_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",36,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_37_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",37,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_38_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",38,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_39_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",39,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_40_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",40,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_41_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",41,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_42_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",42,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_43_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",43,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_45_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",45,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_ccdf12459bd3b0e0_46_boot,"openfl.text._internal.TextLayout","boot",0xe26facf4,"openfl.text._internal.TextLayout.boot","openfl/text/_internal/TextLayout.hx",46,0xf9c6f251)
namespace openfl{
namespace text{
namespace _internal{

void TextLayout_obj::__construct(::String __o_text, ::lime::text::Font font,::hx::Null< int >  __o_size,::hx::Null< int >  __o_direction,::String __o_script,::String __o_language){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		int size = __o_size.Default(12);
            		int direction = __o_direction.Default(4);
            		::String script = __o_script;
            		if (::hx::IsNull(__o_script)) script = HX_("Zyyy",7f,6e,d9,3b);
            		::String language = __o_language;
            		if (::hx::IsNull(__o_language)) language = HX_("en",69,58,00,00);
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_24_new)
HXLINE(  56)		this->letterSpacing = ((Float)0);
HXLINE(  75)		this->set_text(text);
HXLINE(  76)		this->set_font(font);
HXLINE(  77)		this->set_size(size);
HXLINE(  78)		this->_hx___direction = direction;
HXLINE(  79)		this->_hx___script = script;
HXLINE(  80)		this->_hx___language = language;
HXLINE(  82)		this->positions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  83)		this->_hx___dirty = true;
HXLINE(  85)		this->_hx___create(this->_hx___direction,this->_hx___script,this->_hx___language);
            	}

Dynamic TextLayout_obj::__CreateEmpty() { return new TextLayout_obj; }

void *TextLayout_obj::_hx_vtable = 0;

Dynamic TextLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextLayout_obj > _hx_result = new TextLayout_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool TextLayout_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x26f4040e;
}

void TextLayout_obj::_hx___create(int direction,::String script,::String language){
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_89___create)
HXLINE(  90)		if ((language.length != 4)) {
HXLINE(  90)			return;
            		}
HXLINE(  93)		this->_hx___hbBuffer = ::lime::text::harfbuzz::_HBBuffer::HBBuffer_Impl__obj::_new();
HXLINE(  94)		{
HXLINE(  94)			 ::Dynamic this1 = this->_hx___hbBuffer;
HXDLIN(  94)			int value;
HXDLIN(  94)			switch((int)(direction)){
            				case (int)4: {
HXLINE(  94)					value = 4;
            				}
            				break;
            				case (int)5: {
HXLINE(  94)					value = 5;
            				}
            				break;
            				case (int)6: {
HXLINE(  94)					value = 6;
            				}
            				break;
            				case (int)7: {
HXLINE(  94)					value = 7;
            				}
            				break;
            				default:{
HXLINE(  94)					value = 0;
            				}
            			}
HXDLIN(  94)			::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_direction(::hx::DynamicPtr(this1),value);
            		}
HXLINE(  95)		{
HXLINE(  95)			int value1 = (int)1517910393;
HXDLIN(  95)			::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_script(::hx::DynamicPtr(this->_hx___hbBuffer),value1);
            		}
HXLINE(  96)		{
HXLINE(  96)			 ::Dynamic this2 = this->_hx___hbBuffer;
HXDLIN(  96)			 ::Dynamic value2 = ::lime::text::harfbuzz::_HBLanguage::HBLanguage_Impl__obj::_new(language);
HXDLIN(  96)			::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_language(::hx::DynamicPtr(this2),::hx::DynamicPtr(value2));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(TextLayout_obj,_hx___create,(void))

void TextLayout_obj::_hx___position(){
            	HX_GC_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_101___position)
HXLINE( 102)		this->positions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 105)		bool _hx_tmp;
HXDLIN( 105)		bool _hx_tmp1;
HXDLIN( 105)		bool _hx_tmp2;
HXDLIN( 105)		if (::hx::IsNotNull( this->text )) {
HXLINE( 105)			_hx_tmp2 = (this->text != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 105)			_hx_tmp2 = false;
            		}
HXDLIN( 105)		if (_hx_tmp2) {
HXLINE( 105)			_hx_tmp1 = ::hx::IsNotNull( this->font );
            		}
            		else {
HXLINE( 105)			_hx_tmp1 = false;
            		}
HXDLIN( 105)		if (_hx_tmp1) {
HXLINE( 105)			_hx_tmp = ::hx::IsNotNull( this->font->src );
            		}
            		else {
HXLINE( 105)			_hx_tmp = false;
            		}
HXDLIN( 105)		if (_hx_tmp) {
HXLINE( 107)			if (::hx::IsNull( this->_hx___buffer )) {
HXLINE( 109)				this->_hx___buffer = ::haxe::io::Bytes_obj::alloc((this->text.length * 5));
            			}
HXLINE( 113)			if (::hx::IsInstanceNotEq( this->_hx___font,this->font )) {
HXLINE( 115)				this->_hx___font = this->font;
HXLINE( 117)				this->font->_hx___setSize(this->size);
HXLINE( 118)				this->_hx___hbFont = ::lime::text::harfbuzz::_HBFTFont::HBFTFont_Impl__obj::_new(this->font);
HXLINE( 120)				if (this->autoHint) {
HXLINE( 122)					::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_ft_font_set_load_flags(::hx::DynamicPtr(this->_hx___hbFont),32);
            				}
            			}
            			else {
HXLINE( 127)				this->font->_hx___setSize(this->size);
            			}
HXLINE( 130)			if (::hx::IsNull( this->_hx___hbBuffer )) {
HXLINE( 132)				this->_hx___hbBuffer = ::lime::text::harfbuzz::_HBBuffer::HBBuffer_Impl__obj::_new();
            			}
            			else {
HXLINE( 136)				::lime::text::harfbuzz::_HBBuffer::HBBuffer_Impl__obj::reset(this->_hx___hbBuffer);
            			}
HXLINE( 139)			{
HXLINE( 139)				 ::Dynamic this1 = this->_hx___hbBuffer;
HXDLIN( 139)				int value;
HXDLIN( 139)				switch((int)(this->get_direction())){
            					case (int)4: {
HXLINE( 139)						value = 4;
            					}
            					break;
            					case (int)5: {
HXLINE( 139)						value = 5;
            					}
            					break;
            					case (int)6: {
HXLINE( 139)						value = 6;
            					}
            					break;
            					case (int)7: {
HXLINE( 139)						value = 7;
            					}
            					break;
            					default:{
HXLINE( 139)						value = 0;
            					}
            				}
HXDLIN( 139)				::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_direction(::hx::DynamicPtr(this1),value);
            			}
HXLINE( 140)			{
HXLINE( 140)				 ::Dynamic this2 = this->_hx___hbBuffer;
HXDLIN( 140)				::String this3 = this->get_script();
HXDLIN( 140)				int value1 = (int)1517910393;
HXDLIN( 140)				::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_script(::hx::DynamicPtr(this2),value1);
            			}
HXLINE( 141)			{
HXLINE( 141)				 ::Dynamic this4 = this->_hx___hbBuffer;
HXDLIN( 141)				 ::Dynamic value2 = ::lime::text::harfbuzz::_HBLanguage::HBLanguage_Impl__obj::_new(this->get_language());
HXDLIN( 141)				::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_language(::hx::DynamicPtr(this4),::hx::DynamicPtr(value2));
            			}
HXLINE( 142)			{
HXLINE( 142)				int value3 = 2;
HXDLIN( 142)				::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_cluster_level(::hx::DynamicPtr(this->_hx___hbBuffer),value3);
            			}
HXLINE( 150)			 ::Dynamic _hx_tmp = this->_hx___hbBuffer;
HXDLIN( 150)			Float _hx_tmp1 = (uintptr_t)this->text.wc_str();
HXDLIN( 150)			::lime::text::harfbuzz::_HBBuffer::HBBuffer_Impl__obj::addUTF16(_hx_tmp,_hx_tmp1,this->text.length,0,-1);
HXLINE( 153)			::lime::text::harfbuzz::HB_obj::shape(this->_hx___hbFont,this->_hx___hbBuffer,null());
HXLINE( 155)			::Array< ::Dynamic> _info = ::lime::text::harfbuzz::_HBBuffer::HBBuffer_Impl__obj::getGlyphInfo(this->_hx___hbBuffer);
HXLINE( 156)			::Array< ::Dynamic> _positions = ::lime::text::harfbuzz::_HBBuffer::HBBuffer_Impl__obj::getGlyphPositions(this->_hx___hbBuffer);
HXLINE( 158)			bool _hx_tmp2;
HXDLIN( 158)			if (::hx::IsNotNull( _info )) {
HXLINE( 158)				_hx_tmp2 = ::hx::IsNotNull( _positions );
            			}
            			else {
HXLINE( 158)				_hx_tmp2 = false;
            			}
HXDLIN( 158)			if (_hx_tmp2) {
HXLINE( 160)				 ::lime::text::harfbuzz::HBGlyphInfo info;
HXDLIN( 160)				 ::lime::text::harfbuzz::HBGlyphPosition position;
HXLINE( 161)				int lastCluster = -1;
HXLINE( 163)				int length = ::Std_obj::_hx_int(::Math_obj::min(( (Float)(_info->length) ),( (Float)(_positions->length) )));
HXLINE( 165)				{
HXLINE( 165)					int _g = 0;
HXDLIN( 165)					int _g1 = length;
HXDLIN( 165)					while((_g < _g1)){
HXLINE( 165)						_g = (_g + 1);
HXDLIN( 165)						int i = (_g - 1);
HXLINE( 167)						info = _info->__get(i).StaticCast<  ::lime::text::harfbuzz::HBGlyphInfo >();
HXLINE( 168)						position = _positions->__get(i).StaticCast<  ::lime::text::harfbuzz::HBGlyphPosition >();
HXLINE( 170)						{
HXLINE( 170)							int _g1 = (lastCluster + 1);
HXDLIN( 170)							int _g2 = info->cluster;
HXDLIN( 170)							while((_g1 < _g2)){
HXLINE( 170)								_g1 = (_g1 + 1);
HXDLIN( 170)								int j = (_g1 - 1);
HXLINE( 174)								::Array< ::Dynamic> _hx_tmp = this->get_positions();
HXDLIN( 174)								 ::lime::math::Vector2 _hx_tmp1 =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,0,0);
HXDLIN( 174)								_hx_tmp->push( ::openfl::text::_internal::GlyphPosition_obj::__alloc( HX_CTX ,0,_hx_tmp1, ::lime::math::Vector2_obj::__alloc( HX_CTX ,0,0)));
            							}
            						}
HXLINE( 177)						::Array< ::Dynamic> _hx_tmp = this->get_positions();
HXDLIN( 177)						int info1 = info->codepoint;
HXDLIN( 177)						 ::lime::math::Vector2 _hx_tmp1 =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,((( (Float)(position->xAdvance) ) / ( (Float)(64) )) + this->letterSpacing),(( (Float)(position->yAdvance) ) / ( (Float)(64) )));
HXDLIN( 177)						_hx_tmp->push( ::openfl::text::_internal::GlyphPosition_obj::__alloc( HX_CTX ,info1,_hx_tmp1, ::lime::math::Vector2_obj::__alloc( HX_CTX ,(( (Float)(position->xOffset) ) / ( (Float)(64) )),(( (Float)(position->yOffset) ) / ( (Float)(64) )))));
HXLINE( 179)						lastCluster = info->cluster;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,_hx___position,(void))

::Array< ::Dynamic> TextLayout_obj::get_positions(){
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_188_get_positions)
HXLINE( 189)		if (this->_hx___dirty) {
HXLINE( 191)			this->_hx___dirty = false;
HXLINE( 192)			this->_hx___position();
            		}
HXLINE( 195)		return this->positions;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_positions,return )

int TextLayout_obj::get_direction(){
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_200_get_direction)
HXDLIN( 200)		return this->_hx___direction;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_direction,return )

int TextLayout_obj::set_direction(int value){
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_204_set_direction)
HXLINE( 205)		if ((value == this->_hx___direction)) {
HXLINE( 205)			return value;
            		}
HXLINE( 207)		this->_hx___direction = value;
HXLINE( 208)		this->_hx___dirty = true;
HXLINE( 210)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_direction,return )

 ::lime::text::Font TextLayout_obj::set_font( ::lime::text::Font value){
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_214_set_font)
HXLINE( 215)		if (::hx::IsInstanceEq( value,this->font )) {
HXLINE( 215)			return value;
            		}
HXLINE( 217)		this->font = value;
HXLINE( 218)		this->_hx___dirty = true;
HXLINE( 219)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_font,return )

::Array< int > TextLayout_obj::get_glyphs(){
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_225_get_glyphs)
HXLINE( 226)		::Array< int > glyphs = ::Array_obj< int >::__new(0);
HXLINE( 228)		{
HXLINE( 228)			int _g = 0;
HXDLIN( 228)			::Array< ::Dynamic> _g1 = this->get_positions();
HXDLIN( 228)			while((_g < _g1->length)){
HXLINE( 228)				 ::openfl::text::_internal::GlyphPosition position = _g1->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN( 228)				_g = (_g + 1);
HXLINE( 230)				glyphs->push(position->glyph);
            			}
            		}
HXLINE( 233)		return glyphs;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_glyphs,return )

::String TextLayout_obj::get_language(){
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_238_get_language)
HXDLIN( 238)		return this->_hx___language;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_language,return )

::String TextLayout_obj::set_language(::String value){
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_242_set_language)
HXLINE( 243)		if ((value == this->_hx___language)) {
HXLINE( 243)			return value;
            		}
HXLINE( 245)		this->_hx___language = value;
HXLINE( 246)		this->_hx___dirty = true;
HXLINE( 248)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_language,return )

::String TextLayout_obj::get_script(){
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_253_get_script)
HXDLIN( 253)		return this->_hx___script;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_script,return )

::String TextLayout_obj::set_script(::String value){
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_257_set_script)
HXLINE( 258)		if ((value == this->_hx___script)) {
HXLINE( 258)			return value;
            		}
HXLINE( 260)		this->_hx___script = value;
HXLINE( 261)		this->_hx___dirty = true;
HXLINE( 263)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_script,return )

int TextLayout_obj::set_size(int value){
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_267_set_size)
HXLINE( 268)		if ((value == this->size)) {
HXLINE( 268)			return value;
            		}
HXLINE( 270)		this->size = value;
HXLINE( 271)		this->_hx___dirty = true;
HXLINE( 272)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_size,return )

::String TextLayout_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_276_set_text)
HXLINE( 277)		if ((value == this->text)) {
HXLINE( 277)			return value;
            		}
HXLINE( 279)		this->text = value;
HXLINE( 280)		this->_hx___dirty = true;
HXLINE( 281)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_text,return )

int TextLayout_obj::FT_LOAD_DEFAULT;

int TextLayout_obj::FT_LOAD_NO_SCALE;

int TextLayout_obj::FT_LOAD_NO_HINTING;

int TextLayout_obj::FT_LOAD_RENDER;

int TextLayout_obj::FT_LOAD_NO_BITMAP;

int TextLayout_obj::FT_LOAD_VERTICAL_LAYOUT;

int TextLayout_obj::FT_LOAD_FORCE_AUTOHINT;

int TextLayout_obj::FT_LOAD_CROP_BITMAP;

int TextLayout_obj::FT_LOAD_PEDANTIC;

int TextLayout_obj::FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH;

int TextLayout_obj::FT_LOAD_NO_RECURSE;

int TextLayout_obj::FT_LOAD_IGNORE_TRANSFORM;

int TextLayout_obj::FT_LOAD_MONOCHROME;

int TextLayout_obj::FT_LOAD_LINEAR_DESIGN;

int TextLayout_obj::FT_LOAD_NO_AUTOHINT;

int TextLayout_obj::FT_LOAD_COLOR;

int TextLayout_obj::FT_LOAD_COMPUTE_METRICS;

int TextLayout_obj::FT_LOAD_BITMAP_METRICS_ONLY;

int TextLayout_obj::FT_LOAD_TARGET_NORMAL;

int TextLayout_obj::FT_LOAD_TARGET_LIGHT;


::hx::ObjectPtr< TextLayout_obj > TextLayout_obj::__new(::String __o_text, ::lime::text::Font font,::hx::Null< int >  __o_size,::hx::Null< int >  __o_direction,::String __o_script,::String __o_language) {
	::hx::ObjectPtr< TextLayout_obj > __this = new TextLayout_obj();
	__this->__construct(__o_text,font,__o_size,__o_direction,__o_script,__o_language);
	return __this;
}

::hx::ObjectPtr< TextLayout_obj > TextLayout_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_text, ::lime::text::Font font,::hx::Null< int >  __o_size,::hx::Null< int >  __o_direction,::String __o_script,::String __o_language) {
	TextLayout_obj *__this = (TextLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextLayout_obj), true, "openfl.text._internal.TextLayout"));
	*(void **)__this = TextLayout_obj::_hx_vtable;
	__this->__construct(__o_text,font,__o_size,__o_direction,__o_script,__o_language);
	return __this;
}

TextLayout_obj::TextLayout_obj()
{
}

void TextLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextLayout);
	HX_MARK_MEMBER_NAME(autoHint,"autoHint");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(_hx___buffer,"__buffer");
	HX_MARK_MEMBER_NAME(_hx___direction,"__direction");
	HX_MARK_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_MARK_MEMBER_NAME(_hx___handle,"__handle");
	HX_MARK_MEMBER_NAME(_hx___language,"__language");
	HX_MARK_MEMBER_NAME(_hx___script,"__script");
	HX_MARK_MEMBER_NAME(_hx___font,"__font");
	HX_MARK_MEMBER_NAME(_hx___hbBuffer,"__hbBuffer");
	HX_MARK_MEMBER_NAME(_hx___hbFont,"__hbFont");
	HX_MARK_END_CLASS();
}

void TextLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(autoHint,"autoHint");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(_hx___buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(_hx___direction,"__direction");
	HX_VISIT_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(_hx___handle,"__handle");
	HX_VISIT_MEMBER_NAME(_hx___language,"__language");
	HX_VISIT_MEMBER_NAME(_hx___script,"__script");
	HX_VISIT_MEMBER_NAME(_hx___font,"__font");
	HX_VISIT_MEMBER_NAME(_hx___hbBuffer,"__hbBuffer");
	HX_VISIT_MEMBER_NAME(_hx___hbFont,"__hbFont");
}

::hx::Val TextLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return ::hx::Val( font ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_glyphs() : glyphs ); }
		if (HX_FIELD_EQ(inName,"script") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_script() ); }
		if (HX_FIELD_EQ(inName,"__font") ) { return ::hx::Val( _hx___font ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return ::hx::Val( _hx___dirty ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoHint") ) { return ::hx::Val( autoHint ); }
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_language() ); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return ::hx::Val( _hx___buffer ); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return ::hx::Val( _hx___handle ); }
		if (HX_FIELD_EQ(inName,"__script") ) { return ::hx::Val( _hx___script ); }
		if (HX_FIELD_EQ(inName,"__hbFont") ) { return ::hx::Val( _hx___hbFont ); }
		if (HX_FIELD_EQ(inName,"__create") ) { return ::hx::Val( _hx___create_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return ::hx::Val( set_font_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_direction() ); }
		if (HX_FIELD_EQ(inName,"positions") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_positions() : positions ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__language") ) { return ::hx::Val( _hx___language ); }
		if (HX_FIELD_EQ(inName,"__hbBuffer") ) { return ::hx::Val( _hx___hbBuffer ); }
		if (HX_FIELD_EQ(inName,"__position") ) { return ::hx::Val( _hx___position_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_glyphs") ) { return ::hx::Val( get_glyphs_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_script") ) { return ::hx::Val( get_script_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_script") ) { return ::hx::Val( set_script_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__direction") ) { return ::hx::Val( _hx___direction ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_language") ) { return ::hx::Val( get_language_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_language") ) { return ::hx::Val( set_language_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { return ::hx::Val( letterSpacing ); }
		if (HX_FIELD_EQ(inName,"get_positions") ) { return ::hx::Val( get_positions_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_direction") ) { return ::hx::Val( get_direction_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return ::hx::Val( set_direction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_font(inValue.Cast<  ::lime::text::Font >()) );font=inValue.Cast<  ::lime::text::Font >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_size(inValue.Cast< int >()) );size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"script") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_script(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"__font") ) { _hx___font=inValue.Cast<  ::lime::text::Font >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { _hx___dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoHint") ) { autoHint=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_language(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { _hx___buffer=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__handle") ) { _hx___handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__script") ) { _hx___script=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hbFont") ) { _hx___hbFont=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_direction(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__language") ) { _hx___language=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hbBuffer") ) { _hx___hbBuffer=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__direction") ) { _hx___direction=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { letterSpacing=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("autoHint",96,2c,34,28));
	outFields->push(HX_("direction",3f,62,40,10));
	outFields->push(HX_("font",cf,5d,c0,43));
	outFields->push(HX_("glyphs",47,f9,58,ae));
	outFields->push(HX_("language",58,80,11,7a));
	outFields->push(HX_("letterSpacing",3d,b7,03,f5));
	outFields->push(HX_("positions",aa,f3,51,d0));
	outFields->push(HX_("script",0b,4e,60,47));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("__buffer",20,28,c4,78));
	outFields->push(HX_("__direction",1f,ab,6c,3e));
	outFields->push(HX_("__dirty",f2,a8,2e,44));
	outFields->push(HX_("__handle",c8,ee,2c,60));
	outFields->push(HX_("__language",78,f3,49,1d));
	outFields->push(HX_("__script",2b,b9,8f,ef));
	outFields->push(HX_("__font",ef,c0,b8,f2));
	outFields->push(HX_("__hbBuffer",ba,76,17,d0));
	outFields->push(HX_("__hbFont",09,55,2b,d9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextLayout_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(TextLayout_obj,autoHint),HX_("autoHint",96,2c,34,28)},
	{::hx::fsObject /*  ::lime::text::Font */ ,(int)offsetof(TextLayout_obj,font),HX_("font",cf,5d,c0,43)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(TextLayout_obj,glyphs),HX_("glyphs",47,f9,58,ae)},
	{::hx::fsFloat,(int)offsetof(TextLayout_obj,letterSpacing),HX_("letterSpacing",3d,b7,03,f5)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TextLayout_obj,positions),HX_("positions",aa,f3,51,d0)},
	{::hx::fsInt,(int)offsetof(TextLayout_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsString,(int)offsetof(TextLayout_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(TextLayout_obj,_hx___buffer),HX_("__buffer",20,28,c4,78)},
	{::hx::fsInt,(int)offsetof(TextLayout_obj,_hx___direction),HX_("__direction",1f,ab,6c,3e)},
	{::hx::fsBool,(int)offsetof(TextLayout_obj,_hx___dirty),HX_("__dirty",f2,a8,2e,44)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextLayout_obj,_hx___handle),HX_("__handle",c8,ee,2c,60)},
	{::hx::fsString,(int)offsetof(TextLayout_obj,_hx___language),HX_("__language",78,f3,49,1d)},
	{::hx::fsString,(int)offsetof(TextLayout_obj,_hx___script),HX_("__script",2b,b9,8f,ef)},
	{::hx::fsObject /*  ::lime::text::Font */ ,(int)offsetof(TextLayout_obj,_hx___font),HX_("__font",ef,c0,b8,f2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextLayout_obj,_hx___hbBuffer),HX_("__hbBuffer",ba,76,17,d0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextLayout_obj,_hx___hbFont),HX_("__hbFont",09,55,2b,d9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TextLayout_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_DEFAULT,HX_("FT_LOAD_DEFAULT",19,9b,eb,f9)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_NO_SCALE,HX_("FT_LOAD_NO_SCALE",34,73,3f,e0)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_NO_HINTING,HX_("FT_LOAD_NO_HINTING",e5,44,a4,23)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_RENDER,HX_("FT_LOAD_RENDER",de,9f,6f,04)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_NO_BITMAP,HX_("FT_LOAD_NO_BITMAP",e5,7f,2b,0c)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_VERTICAL_LAYOUT,HX_("FT_LOAD_VERTICAL_LAYOUT",0b,61,b4,c0)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_FORCE_AUTOHINT,HX_("FT_LOAD_FORCE_AUTOHINT",32,dd,a6,d5)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_CROP_BITMAP,HX_("FT_LOAD_CROP_BITMAP",76,e0,51,d6)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_PEDANTIC,HX_("FT_LOAD_PEDANTIC",da,45,48,91)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH,HX_("FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH",f2,95,1a,a3)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_NO_RECURSE,HX_("FT_LOAD_NO_RECURSE",a9,24,55,d5)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_IGNORE_TRANSFORM,HX_("FT_LOAD_IGNORE_TRANSFORM",27,cb,33,fb)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_MONOCHROME,HX_("FT_LOAD_MONOCHROME",65,f2,3c,de)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_LINEAR_DESIGN,HX_("FT_LOAD_LINEAR_DESIGN",10,cb,86,4f)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_NO_AUTOHINT,HX_("FT_LOAD_NO_AUTOHINT",ec,bd,2e,f3)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_COLOR,HX_("FT_LOAD_COLOR",bb,89,4b,fc)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_COMPUTE_METRICS,HX_("FT_LOAD_COMPUTE_METRICS",73,c0,e5,75)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_BITMAP_METRICS_ONLY,HX_("FT_LOAD_BITMAP_METRICS_ONLY",50,64,81,a4)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_TARGET_NORMAL,HX_("FT_LOAD_TARGET_NORMAL",0d,a5,b5,72)},
	{::hx::fsInt,(void *) &TextLayout_obj::FT_LOAD_TARGET_LIGHT,HX_("FT_LOAD_TARGET_LIGHT",90,20,0e,a2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TextLayout_obj_sMemberFields[] = {
	HX_("autoHint",96,2c,34,28),
	HX_("font",cf,5d,c0,43),
	HX_("glyphs",47,f9,58,ae),
	HX_("letterSpacing",3d,b7,03,f5),
	HX_("positions",aa,f3,51,d0),
	HX_("size",c1,a0,53,4c),
	HX_("text",ad,cc,f9,4c),
	HX_("__buffer",20,28,c4,78),
	HX_("__direction",1f,ab,6c,3e),
	HX_("__dirty",f2,a8,2e,44),
	HX_("__handle",c8,ee,2c,60),
	HX_("__language",78,f3,49,1d),
	HX_("__script",2b,b9,8f,ef),
	HX_("__font",ef,c0,b8,f2),
	HX_("__hbBuffer",ba,76,17,d0),
	HX_("__hbFont",09,55,2b,d9),
	HX_("__create",1c,d2,3e,24),
	HX_("__position",c9,13,33,6e),
	HX_("get_positions",81,c7,b5,91),
	HX_("get_direction",16,36,a4,d1),
	HX_("set_direction",22,18,aa,16),
	HX_("set_font",cc,72,d8,71),
	HX_("get_glyphs",10,69,e0,9e),
	HX_("get_language",61,34,2b,2f),
	HX_("set_language",d5,57,24,44),
	HX_("get_script",d4,bd,e7,37),
	HX_("set_script",48,5c,65,3b),
	HX_("set_size",be,b5,6b,7a),
	HX_("set_text",aa,e1,11,7b),
	::String(null()) };

static void TextLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_DEFAULT,"FT_LOAD_DEFAULT");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_NO_SCALE,"FT_LOAD_NO_SCALE");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_NO_HINTING,"FT_LOAD_NO_HINTING");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_RENDER,"FT_LOAD_RENDER");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_NO_BITMAP,"FT_LOAD_NO_BITMAP");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_VERTICAL_LAYOUT,"FT_LOAD_VERTICAL_LAYOUT");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_FORCE_AUTOHINT,"FT_LOAD_FORCE_AUTOHINT");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_CROP_BITMAP,"FT_LOAD_CROP_BITMAP");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_PEDANTIC,"FT_LOAD_PEDANTIC");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH,"FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_NO_RECURSE,"FT_LOAD_NO_RECURSE");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_IGNORE_TRANSFORM,"FT_LOAD_IGNORE_TRANSFORM");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_MONOCHROME,"FT_LOAD_MONOCHROME");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_LINEAR_DESIGN,"FT_LOAD_LINEAR_DESIGN");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_NO_AUTOHINT,"FT_LOAD_NO_AUTOHINT");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_COLOR,"FT_LOAD_COLOR");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_COMPUTE_METRICS,"FT_LOAD_COMPUTE_METRICS");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_BITMAP_METRICS_ONLY,"FT_LOAD_BITMAP_METRICS_ONLY");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_TARGET_NORMAL,"FT_LOAD_TARGET_NORMAL");
	HX_MARK_MEMBER_NAME(TextLayout_obj::FT_LOAD_TARGET_LIGHT,"FT_LOAD_TARGET_LIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_DEFAULT,"FT_LOAD_DEFAULT");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_NO_SCALE,"FT_LOAD_NO_SCALE");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_NO_HINTING,"FT_LOAD_NO_HINTING");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_RENDER,"FT_LOAD_RENDER");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_NO_BITMAP,"FT_LOAD_NO_BITMAP");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_VERTICAL_LAYOUT,"FT_LOAD_VERTICAL_LAYOUT");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_FORCE_AUTOHINT,"FT_LOAD_FORCE_AUTOHINT");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_CROP_BITMAP,"FT_LOAD_CROP_BITMAP");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_PEDANTIC,"FT_LOAD_PEDANTIC");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH,"FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_NO_RECURSE,"FT_LOAD_NO_RECURSE");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_IGNORE_TRANSFORM,"FT_LOAD_IGNORE_TRANSFORM");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_MONOCHROME,"FT_LOAD_MONOCHROME");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_LINEAR_DESIGN,"FT_LOAD_LINEAR_DESIGN");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_NO_AUTOHINT,"FT_LOAD_NO_AUTOHINT");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_COLOR,"FT_LOAD_COLOR");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_COMPUTE_METRICS,"FT_LOAD_COMPUTE_METRICS");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_BITMAP_METRICS_ONLY,"FT_LOAD_BITMAP_METRICS_ONLY");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_TARGET_NORMAL,"FT_LOAD_TARGET_NORMAL");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::FT_LOAD_TARGET_LIGHT,"FT_LOAD_TARGET_LIGHT");
};

#endif

::hx::Class TextLayout_obj::__mClass;

static ::String TextLayout_obj_sStaticFields[] = {
	HX_("FT_LOAD_DEFAULT",19,9b,eb,f9),
	HX_("FT_LOAD_NO_SCALE",34,73,3f,e0),
	HX_("FT_LOAD_NO_HINTING",e5,44,a4,23),
	HX_("FT_LOAD_RENDER",de,9f,6f,04),
	HX_("FT_LOAD_NO_BITMAP",e5,7f,2b,0c),
	HX_("FT_LOAD_VERTICAL_LAYOUT",0b,61,b4,c0),
	HX_("FT_LOAD_FORCE_AUTOHINT",32,dd,a6,d5),
	HX_("FT_LOAD_CROP_BITMAP",76,e0,51,d6),
	HX_("FT_LOAD_PEDANTIC",da,45,48,91),
	HX_("FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH",f2,95,1a,a3),
	HX_("FT_LOAD_NO_RECURSE",a9,24,55,d5),
	HX_("FT_LOAD_IGNORE_TRANSFORM",27,cb,33,fb),
	HX_("FT_LOAD_MONOCHROME",65,f2,3c,de),
	HX_("FT_LOAD_LINEAR_DESIGN",10,cb,86,4f),
	HX_("FT_LOAD_NO_AUTOHINT",ec,bd,2e,f3),
	HX_("FT_LOAD_COLOR",bb,89,4b,fc),
	HX_("FT_LOAD_COMPUTE_METRICS",73,c0,e5,75),
	HX_("FT_LOAD_BITMAP_METRICS_ONLY",50,64,81,a4),
	HX_("FT_LOAD_TARGET_NORMAL",0d,a5,b5,72),
	HX_("FT_LOAD_TARGET_LIGHT",90,20,0e,a2),
	::String(null())
};

void TextLayout_obj::__register()
{
	TextLayout_obj _hx_dummy;
	TextLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal.TextLayout",ec,ee,b4,da);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextLayout_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextLayout_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextLayout_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_24_boot)
HXDLIN(  24)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("get_glyphs",10,69,e0,9e), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("glyphs",47,f9,58,ae), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(2,HX_("__hbBuffer",ba,76,17,d0), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(3,HX_("__hbFont",09,55,2b,d9), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(4,HX_("__handle",c8,ee,2c,60), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_26_boot)
HXDLIN(  26)		FT_LOAD_DEFAULT = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_27_boot)
HXDLIN(  27)		FT_LOAD_NO_SCALE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_28_boot)
HXDLIN(  28)		FT_LOAD_NO_HINTING = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_29_boot)
HXDLIN(  29)		FT_LOAD_RENDER = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_30_boot)
HXDLIN(  30)		FT_LOAD_NO_BITMAP = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_31_boot)
HXDLIN(  31)		FT_LOAD_VERTICAL_LAYOUT = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_32_boot)
HXDLIN(  32)		FT_LOAD_FORCE_AUTOHINT = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_33_boot)
HXDLIN(  33)		FT_LOAD_CROP_BITMAP = 64;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_34_boot)
HXDLIN(  34)		FT_LOAD_PEDANTIC = 128;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_35_boot)
HXDLIN(  35)		FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_36_boot)
HXDLIN(  36)		FT_LOAD_NO_RECURSE = 512;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_37_boot)
HXDLIN(  37)		FT_LOAD_IGNORE_TRANSFORM = 1024;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_38_boot)
HXDLIN(  38)		FT_LOAD_MONOCHROME = 2048;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_39_boot)
HXDLIN(  39)		FT_LOAD_LINEAR_DESIGN = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_40_boot)
HXDLIN(  40)		FT_LOAD_NO_AUTOHINT = 8192;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_41_boot)
HXDLIN(  41)		FT_LOAD_COLOR = 16384;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_42_boot)
HXDLIN(  42)		FT_LOAD_COMPUTE_METRICS = 32768;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_43_boot)
HXDLIN(  43)		FT_LOAD_BITMAP_METRICS_ONLY = 65536;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_45_boot)
HXDLIN(  45)		FT_LOAD_TARGET_NORMAL = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccdf12459bd3b0e0_46_boot)
HXDLIN(  46)		FT_LOAD_TARGET_LIGHT = 0;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
