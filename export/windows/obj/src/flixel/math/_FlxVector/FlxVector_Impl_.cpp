#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math__FlxVector_FlxVector_Impl_
#include <flixel/math/_FlxVector/FlxVector_Impl_.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_30_get,"flixel.math._FlxVector.FlxVector_Impl_","get",0x08159f99,"flixel.math._FlxVector.FlxVector_Impl_.get","flixel/math/FlxVector.hx",30,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_43_weak,"flixel.math._FlxVector.FlxVector_Impl_","weak",0x15696015,"flixel.math._FlxVector.FlxVector_Impl_.weak","flixel/math/FlxVector.hx",43,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_100__new,"flixel.math._FlxVector.FlxVector_Impl_","_new",0x059318fe,"flixel.math._FlxVector.FlxVector_Impl_._new","flixel/math/FlxVector.hx",100,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_113_set,"flixel.math._FlxVector.FlxVector_Impl_","set",0x081ebaa5,"flixel.math._FlxVector.FlxVector_Impl_.set","flixel/math/FlxVector.hx",113,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_125_add,"flixel.math._FlxVector.FlxVector_Impl_","add",0x08111124,"flixel.math._FlxVector.FlxVector_Impl_.add","flixel/math/FlxVector.hx",125,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_136_addPoint,"flixel.math._FlxVector.FlxVector_Impl_","addPoint",0xea07708c,"flixel.math._FlxVector.FlxVector_Impl_.addPoint","flixel/math/FlxVector.hx",136,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_148_subtract,"flixel.math._FlxVector.FlxVector_Impl_","subtract",0xa22c0b31,"flixel.math._FlxVector.FlxVector_Impl_.subtract","flixel/math/FlxVector.hx",148,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_159_subtractPoint,"flixel.math._FlxVector.FlxVector_Impl_","subtractPoint",0xdc85e75f,"flixel.math._FlxVector.FlxVector_Impl_.subtractPoint","flixel/math/FlxVector.hx",159,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_170_scale,"flixel.math._FlxVector.FlxVector_Impl_","scale",0x57ddf44d,"flixel.math._FlxVector.FlxVector_Impl_.scale","flixel/math/FlxVector.hx",170,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_181_scaleNew,"flixel.math._FlxVector.FlxVector_Impl_","scaleNew",0xab738213,"flixel.math._FlxVector.FlxVector_Impl_.scaleNew","flixel/math/FlxVector.hx",181,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_192_addNew,"flixel.math._FlxVector.FlxVector_Impl_","addNew",0xed36c59c,"flixel.math._FlxVector.FlxVector_Impl_.addNew","flixel/math/FlxVector.hx",192,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_203_subtractNew,"flixel.math._FlxVector.FlxVector_Impl_","subtractNew",0x674bd1af,"flixel.math._FlxVector.FlxVector_Impl_.subtractNew","flixel/math/FlxVector.hx",203,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_214_copyFrom,"flixel.math._FlxVector.FlxVector_Impl_","copyFrom",0x727ba1dc,"flixel.math._FlxVector.FlxVector_Impl_.copyFrom","flixel/math/FlxVector.hx",214,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_225_copyFromFlash,"flixel.math._FlxVector.FlxVector_Impl_","copyFromFlash",0xb0f9c634,"flixel.math._FlxVector.FlxVector_Impl_.copyFromFlash","flixel/math/FlxVector.hx",225,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_233_floor,"flixel.math._FlxVector.FlxVector_Impl_","floor",0xe1a5f78f,"flixel.math._FlxVector.FlxVector_Impl_.floor","flixel/math/FlxVector.hx",233,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_241_ceil,"flixel.math._FlxVector.FlxVector_Impl_","ceil",0x083122a2,"flixel.math._FlxVector.FlxVector_Impl_.ceil","flixel/math/FlxVector.hx",241,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_249_round,"flixel.math._FlxVector.FlxVector_Impl_","round",0xcc751e11,"flixel.math._FlxVector.FlxVector_Impl_.round","flixel/math/FlxVector.hx",249,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_261_rotate,"flixel.math._FlxVector.FlxVector_Impl_","rotate",0x19522b38,"flixel.math._FlxVector.FlxVector_Impl_.rotate","flixel/math/FlxVector.hx",261,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_271_transform,"flixel.math._FlxVector.FlxVector_Impl_","transform",0x72bbf0af,"flixel.math._FlxVector.FlxVector_Impl_.transform","flixel/math/FlxVector.hx",271,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_281_dotProduct,"flixel.math._FlxVector.FlxVector_Impl_","dotProduct",0x94723f03,"flixel.math._FlxVector.FlxVector_Impl_.dotProduct","flixel/math/FlxVector.hx",281,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_296_dotProductWeak,"flixel.math._FlxVector.FlxVector_Impl_","dotProductWeak",0xe800051b,"flixel.math._FlxVector.FlxVector_Impl_.dotProductWeak","flixel/math/FlxVector.hx",296,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_306_dotProdWithNormalizing,"flixel.math._FlxVector.FlxVector_Impl_","dotProdWithNormalizing",0x1c2bf1a1,"flixel.math._FlxVector.FlxVector_Impl_.dotProdWithNormalizing","flixel/math/FlxVector.hx",306,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_320_isPerpendicular,"flixel.math._FlxVector.FlxVector_Impl_","isPerpendicular",0x5b3427e3,"flixel.math._FlxVector.FlxVector_Impl_.isPerpendicular","flixel/math/FlxVector.hx",320,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_330_crossProductLength,"flixel.math._FlxVector.FlxVector_Impl_","crossProductLength",0x69be8232,"flixel.math._FlxVector.FlxVector_Impl_.crossProductLength","flixel/math/FlxVector.hx",330,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_345_crossProductLengthWeak,"flixel.math._FlxVector.FlxVector_Impl_","crossProductLengthWeak",0x3bff0bca,"flixel.math._FlxVector.FlxVector_Impl_.crossProductLengthWeak","flixel/math/FlxVector.hx",345,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_355_isParallel,"flixel.math._FlxVector.FlxVector_Impl_","isParallel",0x4f27d42e,"flixel.math._FlxVector.FlxVector_Impl_.isParallel","flixel/math/FlxVector.hx",355,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_370_isParallelWeak,"flixel.math._FlxVector.FlxVector_Impl_","isParallelWeak",0x17df0bc6,"flixel.math._FlxVector.FlxVector_Impl_.isParallelWeak","flixel/math/FlxVector.hx",370,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_380_isZero,"flixel.math._FlxVector.FlxVector_Impl_","isZero",0xbc89b90f,"flixel.math._FlxVector.FlxVector_Impl_.isZero","flixel/math/FlxVector.hx",380,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_387_zero,"flixel.math._FlxVector.FlxVector_Impl_","zero",0x176512c5,"flixel.math._FlxVector.FlxVector_Impl_.zero","flixel/math/FlxVector.hx",387,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_396_normalize,"flixel.math._FlxVector.FlxVector_Impl_","normalize",0xd8c9fad0,"flixel.math._FlxVector.FlxVector_Impl_.normalize","flixel/math/FlxVector.hx",396,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_409_isNormalized,"flixel.math._FlxVector.FlxVector_Impl_","isNormalized",0xe04af55e,"flixel.math._FlxVector.FlxVector_Impl_.isNormalized","flixel/math/FlxVector.hx",409,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_419_rotateByRadians,"flixel.math._FlxVector.FlxVector_Impl_","rotateByRadians",0x1e311f03,"flixel.math._FlxVector.FlxVector_Impl_.rotateByRadians","flixel/math/FlxVector.hx",419,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_438_rotateByDegrees,"flixel.math._FlxVector.FlxVector_Impl_","rotateByDegrees",0x319bbc38,"flixel.math._FlxVector.FlxVector_Impl_.rotateByDegrees","flixel/math/FlxVector.hx",438,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_449_rotateWithTrig,"flixel.math._FlxVector.FlxVector_Impl_","rotateWithTrig",0x6625995a,"flixel.math._FlxVector.FlxVector_Impl_.rotateWithTrig","flixel/math/FlxVector.hx",449,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_466_setPolarRadians,"flixel.math._FlxVector.FlxVector_Impl_","setPolarRadians",0x733cfc99,"flixel.math._FlxVector.FlxVector_Impl_.setPolarRadians","flixel/math/FlxVector.hx",466,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_483_setPolarDegrees,"flixel.math._FlxVector.FlxVector_Impl_","setPolarDegrees",0x86a799ce,"flixel.math._FlxVector.FlxVector_Impl_.setPolarDegrees","flixel/math/FlxVector.hx",483,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_490_rightNormal,"flixel.math._FlxVector.FlxVector_Impl_","rightNormal",0xf5409926,"flixel.math._FlxVector.FlxVector_Impl_.rightNormal","flixel/math/FlxVector.hx",490,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_503_leftNormal,"flixel.math._FlxVector.FlxVector_Impl_","leftNormal",0xb5fc44eb,"flixel.math._FlxVector.FlxVector_Impl_.leftNormal","flixel/math/FlxVector.hx",503,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_516_negate,"flixel.math._FlxVector.FlxVector_Impl_","negate",0xb54b269f,"flixel.math._FlxVector.FlxVector_Impl_.negate","flixel/math/FlxVector.hx",516,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_524_negateNew,"flixel.math._FlxVector.FlxVector_Impl_","negateNew",0xf3050f01,"flixel.math._FlxVector.FlxVector_Impl_.negateNew","flixel/math/FlxVector.hx",524,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_536_projectTo,"flixel.math._FlxVector.FlxVector_Impl_","projectTo",0xc22147f7,"flixel.math._FlxVector.FlxVector_Impl_.projectTo","flixel/math/FlxVector.hx",536,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_558_projectToNormalized,"flixel.math._FlxVector.FlxVector_Impl_","projectToNormalized",0x93d9eb0e,"flixel.math._FlxVector.FlxVector_Impl_.projectToNormalized","flixel/math/FlxVector.hx",558,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_573_projectToNormalizedWeak,"flixel.math._FlxVector.FlxVector_Impl_","projectToNormalizedWeak",0x681612a6,"flixel.math._FlxVector.FlxVector_Impl_.projectToNormalizedWeak","flixel/math/FlxVector.hx",573,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_588_perpProduct,"flixel.math._FlxVector.FlxVector_Impl_","perpProduct",0x4ee6587f,"flixel.math._FlxVector.FlxVector_Impl_.perpProduct","flixel/math/FlxVector.hx",588,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_600_perpProductWeak,"flixel.math._FlxVector.FlxVector_Impl_","perpProductWeak",0x56a48c97,"flixel.math._FlxVector.FlxVector_Impl_.perpProductWeak","flixel/math/FlxVector.hx",600,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_612_ratio,"flixel.math._FlxVector.FlxVector_Impl_","ratio",0xc3335ace,"flixel.math._FlxVector.FlxVector_Impl_.ratio","flixel/math/FlxVector.hx",612,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_630_ratioWeak,"flixel.math._FlxVector.FlxVector_Impl_","ratioWeak",0xbf426266,"flixel.math._FlxVector.FlxVector_Impl_.ratioWeak","flixel/math/FlxVector.hx",630,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_651_findIntersection,"flixel.math._FlxVector.FlxVector_Impl_","findIntersection",0x5b7d2b3f,"flixel.math._FlxVector.FlxVector_Impl_.findIntersection","flixel/math/FlxVector.hx",651,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_683_findIntersectionInBounds,"flixel.math._FlxVector.FlxVector_Impl_","findIntersectionInBounds",0xded68e99,"flixel.math._FlxVector.FlxVector_Impl_.findIntersectionInBounds","flixel/math/FlxVector.hx",683,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_712_truncate,"flixel.math._FlxVector.FlxVector_Impl_","truncate",0x79145483,"flixel.math._FlxVector.FlxVector_Impl_.truncate","flixel/math/FlxVector.hx",712,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_724_radiansBetween,"flixel.math._FlxVector.FlxVector_Impl_","radiansBetween",0x91dd8f53,"flixel.math._FlxVector.FlxVector_Impl_.radiansBetween","flixel/math/FlxVector.hx",724,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_738_degreesBetween,"flixel.math._FlxVector.FlxVector_Impl_","degreesBetween",0xe72232be,"flixel.math._FlxVector.FlxVector_Impl_.degreesBetween","flixel/math/FlxVector.hx",738,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_748_sign,"flixel.math._FlxVector.FlxVector_Impl_","sign",0x12c793da,"flixel.math._FlxVector.FlxVector_Impl_.sign","flixel/math/FlxVector.hx",748,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_764_dist,"flixel.math._FlxVector.FlxVector_Impl_","dist",0x08dd6b03,"flixel.math._FlxVector.FlxVector_Impl_.dist","flixel/math/FlxVector.hx",764,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_771_distSquared,"flixel.math._FlxVector.FlxVector_Impl_","distSquared",0x862cfc64,"flixel.math._FlxVector.FlxVector_Impl_.distSquared","flixel/math/FlxVector.hx",771,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_786_bounce,"flixel.math._FlxVector.FlxVector_Impl_","bounce",0xb44f6a65,"flixel.math._FlxVector.FlxVector_Impl_.bounce","flixel/math/FlxVector.hx",786,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_803_bounceWithFriction,"flixel.math._FlxVector.FlxVector_Impl_","bounceWithFriction",0x204c5b25,"flixel.math._FlxVector.FlxVector_Impl_.bounceWithFriction","flixel/math/FlxVector.hx",803,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_823_isValid,"flixel.math._FlxVector.FlxVector_Impl_","isValid",0xebb47535,"flixel.math._FlxVector.FlxVector_Impl_.isValid","flixel/math/FlxVector.hx",823,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_833_clone,"flixel.math._FlxVector.FlxVector_Impl_","clone",0x27723920,"flixel.math._FlxVector.FlxVector_Impl_.clone","flixel/math/FlxVector.hx",833,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_846_get_x,"flixel.math._FlxVector.FlxVector_Impl_","get_x",0x706fcb12,"flixel.math._FlxVector.FlxVector_Impl_.get_x","flixel/math/FlxVector.hx",846,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_851_set_x,"flixel.math._FlxVector.FlxVector_Impl_","set_x",0x593ec11e,"flixel.math._FlxVector.FlxVector_Impl_.set_x","flixel/math/FlxVector.hx",851,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_856_get_y,"flixel.math._FlxVector.FlxVector_Impl_","get_y",0x706fcb13,"flixel.math._FlxVector.FlxVector_Impl_.get_y","flixel/math/FlxVector.hx",856,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_861_set_y,"flixel.math._FlxVector.FlxVector_Impl_","set_y",0x593ec11f,"flixel.math._FlxVector.FlxVector_Impl_.set_y","flixel/math/FlxVector.hx",861,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_865_get_dx,"flixel.math._FlxVector.FlxVector_Impl_","get_dx",0xf161d3ba,"flixel.math._FlxVector.FlxVector_Impl_.get_dx","flixel/math/FlxVector.hx",865,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_873_get_dy,"flixel.math._FlxVector.FlxVector_Impl_","get_dy",0xf161d3bb,"flixel.math._FlxVector.FlxVector_Impl_.get_dy","flixel/math/FlxVector.hx",873,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_882_get_length,"flixel.math._FlxVector.FlxVector_Impl_","get_length",0xe6111c0c,"flixel.math._FlxVector.FlxVector_Impl_.get_length","flixel/math/FlxVector.hx",882,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_886_set_length,"flixel.math._FlxVector.FlxVector_Impl_","set_length",0xe98eba80,"flixel.math._FlxVector.FlxVector_Impl_.set_length","flixel/math/FlxVector.hx",886,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_898_get_lengthSquared,"flixel.math._FlxVector.FlxVector_Impl_","get_lengthSquared",0xe9076e7b,"flixel.math._FlxVector.FlxVector_Impl_.get_lengthSquared","flixel/math/FlxVector.hx",898,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_903_get_degrees,"flixel.math._FlxVector.FlxVector_Impl_","get_degrees",0x1ba79dc1,"flixel.math._FlxVector.FlxVector_Impl_.get_degrees","flixel/math/FlxVector.hx",903,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_907_set_degrees,"flixel.math._FlxVector.FlxVector_Impl_","set_degrees",0x2614a4cd,"flixel.math._FlxVector.FlxVector_Impl_.set_degrees","flixel/math/FlxVector.hx",907,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_913_get_radians,"flixel.math._FlxVector.FlxVector_Impl_","get_radians",0x083d008c,"flixel.math._FlxVector.FlxVector_Impl_.get_radians","flixel/math/FlxVector.hx",913,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_921_set_radians,"flixel.math._FlxVector.FlxVector_Impl_","set_radians",0x12aa0798,"flixel.math._FlxVector.FlxVector_Impl_.set_radians","flixel/math/FlxVector.hx",921,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_931_get_rx,"flixel.math._FlxVector.FlxVector_Impl_","get_rx",0xf161dfec,"flixel.math._FlxVector.FlxVector_Impl_.get_rx","flixel/math/FlxVector.hx",931,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_936_get_ry,"flixel.math._FlxVector.FlxVector_Impl_","get_ry",0xf161dfed,"flixel.math._FlxVector.FlxVector_Impl_.get_ry","flixel/math/FlxVector.hx",936,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_941_get_lx,"flixel.math._FlxVector.FlxVector_Impl_","get_lx",0xf161dab2,"flixel.math._FlxVector.FlxVector_Impl_.get_lx","flixel/math/FlxVector.hx",941,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_946_get_ly,"flixel.math._FlxVector.FlxVector_Impl_","get_ly",0xf161dab3,"flixel.math._FlxVector.FlxVector_Impl_.get_ly","flixel/math/FlxVector.hx",946,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_951_get_pool,"flixel.math._FlxVector.FlxVector_Impl_","get_pool",0x7431d282,"flixel.math._FlxVector.FlxVector_Impl_.get_pool","flixel/math/FlxVector.hx",951,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_12_boot,"flixel.math._FlxVector.FlxVector_Impl_","boot",0x078f87cf,"flixel.math._FlxVector.FlxVector_Impl_.boot","flixel/math/FlxVector.hx",12,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_13_boot,"flixel.math._FlxVector.FlxVector_Impl_","boot",0x078f87cf,"flixel.math._FlxVector.FlxVector_Impl_.boot","flixel/math/FlxVector.hx",13,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_15_boot,"flixel.math._FlxVector.FlxVector_Impl_","boot",0x078f87cf,"flixel.math._FlxVector.FlxVector_Impl_.boot","flixel/math/FlxVector.hx",15,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_16_boot,"flixel.math._FlxVector.FlxVector_Impl_","boot",0x078f87cf,"flixel.math._FlxVector.FlxVector_Impl_.boot","flixel/math/FlxVector.hx",16,0x1fcaa75d)
HX_LOCAL_STACK_FRAME(_hx_pos_5cc336e8df399df1_17_boot,"flixel.math._FlxVector.FlxVector_Impl_","boot",0x078f87cf,"flixel.math._FlxVector.FlxVector_Impl_.boot","flixel/math/FlxVector.hx",17,0x1fcaa75d)
namespace flixel{
namespace math{
namespace _FlxVector{

void FlxVector_Impl__obj::__construct() { }

Dynamic FlxVector_Impl__obj::__CreateEmpty() { return new FlxVector_Impl__obj; }

void *FlxVector_Impl__obj::_hx_vtable = 0;

Dynamic FlxVector_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxVector_Impl__obj > _hx_result = new FlxVector_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxVector_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4188c73b;
}

Float FlxVector_Impl__obj::EPSILON;

Float FlxVector_Impl__obj::EPSILON_SQUARED;

 ::flixel::math::FlxPoint FlxVector_Impl__obj::_vector1;

 ::flixel::math::FlxPoint FlxVector_Impl__obj::_vector2;

 ::flixel::math::FlxPoint FlxVector_Impl__obj::_vector3;

 ::flixel::math::FlxPoint FlxVector_Impl__obj::get(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_30_get)
HXDLIN(  30)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(x,y);
HXDLIN(  30)		point->_inPool = false;
HXDLIN(  30)		return point;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,get,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::weak(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_43_weak)
HXDLIN(  43)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(x,y);
HXDLIN(  43)		point->_inPool = false;
HXDLIN(  43)		 ::flixel::math::FlxPoint point1 = point;
HXDLIN(  43)		point1->_weak = true;
HXDLIN(  43)		return point1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,weak,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::_new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_5cc336e8df399df1_100__new)
HXDLIN( 100)		 ::flixel::math::FlxPoint this1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,x,y);
HXDLIN( 100)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,_new,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::set( ::flixel::math::FlxPoint this1,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_113_set)
HXDLIN( 113)		return this1->set(x,y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVector_Impl__obj,set,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::add( ::flixel::math::FlxPoint this1,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_125_add)
HXDLIN( 125)		this1->set_x((this1->x + x));
HXDLIN( 125)		this1->set_y((this1->y + y));
HXDLIN( 125)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVector_Impl__obj,add,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::addPoint( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_136_addPoint)
HXDLIN( 136)		return this1->addPoint(point);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,addPoint,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::subtract( ::flixel::math::FlxPoint this1,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_148_subtract)
HXDLIN( 148)		this1->set_x((this1->x - x));
HXDLIN( 148)		this1->set_y((this1->y - y));
HXDLIN( 148)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVector_Impl__obj,subtract,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::subtractPoint( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_159_subtractPoint)
HXDLIN( 159)		return this1->subtractPoint(point);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,subtractPoint,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::scale( ::flixel::math::FlxPoint this1,Float k){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_170_scale)
HXDLIN( 170)		return this1->scale(k);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,scale,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::scaleNew( ::flixel::math::FlxPoint this1,Float k){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_181_scaleNew)
HXDLIN( 181)		return ::flixel::math::_FlxVector::FlxVector_Impl__obj::clone(this1,null())->scale(k);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,scaleNew,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::addNew( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_192_addNew)
HXDLIN( 192)		return ::flixel::math::_FlxVector::FlxVector_Impl__obj::clone(this1,null())->addPoint(v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,addNew,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::subtractNew( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_203_subtractNew)
HXDLIN( 203)		return ::flixel::math::_FlxVector::FlxVector_Impl__obj::clone(this1,null())->subtractPoint(v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,subtractNew,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::copyFrom( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_214_copyFrom)
HXDLIN( 214)		this1->set_x(point->x);
HXDLIN( 214)		this1->set_y(point->y);
HXDLIN( 214)		if (point->_weak) {
HXDLIN( 214)			point->put();
            		}
HXDLIN( 214)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,copyFrom,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::copyFromFlash( ::flixel::math::FlxPoint this1, ::openfl::geom::Point flashPoint){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_225_copyFromFlash)
HXDLIN( 225)		this1->set_x(flashPoint->x);
HXDLIN( 225)		this1->set_y(flashPoint->y);
HXDLIN( 225)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,copyFromFlash,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::floor( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_233_floor)
HXDLIN( 233)		this1->set_x(( (Float)(::Math_obj::floor(this1->x)) ));
HXDLIN( 233)		this1->set_y(( (Float)(::Math_obj::floor(this1->y)) ));
HXDLIN( 233)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,floor,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::ceil( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_241_ceil)
HXDLIN( 241)		this1->set_x(( (Float)(::Math_obj::ceil(this1->x)) ));
HXDLIN( 241)		this1->set_y(( (Float)(::Math_obj::ceil(this1->y)) ));
HXDLIN( 241)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,ceil,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::round( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_249_round)
HXDLIN( 249)		this1->set_x(( (Float)(::Math_obj::round(this1->x)) ));
HXDLIN( 249)		this1->set_y(( (Float)(::Math_obj::round(this1->y)) ));
HXDLIN( 249)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,round,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::rotate( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint pivot,Float angle){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_261_rotate)
HXDLIN( 261)		return this1->rotate(pivot,angle);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVector_Impl__obj,rotate,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::transform( ::flixel::math::FlxPoint this1, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_271_transform)
HXDLIN( 271)		Float x1 = (((this1->x * matrix->a) + (this1->y * matrix->c)) + matrix->tx);
HXDLIN( 271)		Float y1 = (((this1->x * matrix->b) + (this1->y * matrix->d)) + matrix->ty);
HXDLIN( 271)		return this1->set(x1,y1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,transform,return )

Float FlxVector_Impl__obj::dotProduct( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_281_dotProduct)
HXLINE( 282)		Float dp = ((this1->x * v->x) + (this1->y * v->y));
HXLINE( 283)		if (v->_weak) {
HXLINE( 283)			v->put();
            		}
HXLINE( 284)		return dp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,dotProduct,return )

Float FlxVector_Impl__obj::dotProductWeak( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_296_dotProductWeak)
HXDLIN( 296)		return ((this1->x * v->x) + (this1->y * v->y));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,dotProductWeak,return )

Float FlxVector_Impl__obj::dotProdWithNormalizing( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_306_dotProdWithNormalizing)
HXLINE( 307)		 ::flixel::math::FlxPoint normalized = ::flixel::math::_FlxVector::FlxVector_Impl__obj::normalize(::flixel::math::_FlxVector::FlxVector_Impl__obj::clone(v,::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1));
HXLINE( 308)		if (v->_weak) {
HXLINE( 308)			v->put();
            		}
HXLINE( 309)		return ((this1->x * normalized->x) + (this1->y * normalized->y));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,dotProdWithNormalizing,return )

bool FlxVector_Impl__obj::isPerpendicular( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_320_isPerpendicular)
HXDLIN( 320)		Float dp = ((this1->x * v->x) + (this1->y * v->y));
HXDLIN( 320)		if (v->_weak) {
HXDLIN( 320)			v->put();
            		}
HXDLIN( 320)		return (::Math_obj::abs(dp) < ((Float)9.9999999999999984e-015));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,isPerpendicular,return )

Float FlxVector_Impl__obj::crossProductLength( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_330_crossProductLength)
HXLINE( 331)		Float cp = ((this1->x * v->y) - (this1->y * v->x));
HXLINE( 332)		if (v->_weak) {
HXLINE( 332)			v->put();
            		}
HXLINE( 333)		return cp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,crossProductLength,return )

Float FlxVector_Impl__obj::crossProductLengthWeak( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_345_crossProductLengthWeak)
HXDLIN( 345)		return ((this1->x * v->y) - (this1->y * v->x));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,crossProductLengthWeak,return )

bool FlxVector_Impl__obj::isParallel( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_355_isParallel)
HXLINE( 356)		bool p = (::Math_obj::abs(((this1->x * v->y) - (this1->y * v->x))) < ((Float)9.9999999999999984e-015));
HXLINE( 357)		if (v->_weak) {
HXLINE( 357)			v->put();
            		}
HXLINE( 358)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,isParallel,return )

bool FlxVector_Impl__obj::isParallelWeak( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_370_isParallelWeak)
HXDLIN( 370)		return (::Math_obj::abs(((this1->x * v->y) - (this1->y * v->x))) < ((Float)9.9999999999999984e-015));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,isParallelWeak,return )

bool FlxVector_Impl__obj::isZero( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_380_isZero)
HXDLIN( 380)		if ((::Math_obj::abs(this1->x) < ((Float)0.0000001))) {
HXDLIN( 380)			return (::Math_obj::abs(this1->y) < ((Float)0.0000001));
            		}
            		else {
HXDLIN( 380)			return false;
            		}
HXDLIN( 380)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,isZero,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::zero( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_387_zero)
HXLINE( 388)		this1->set_x(this1->set_y(( (Float)(0) )));
HXLINE( 389)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,zero,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::normalize( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_396_normalize)
HXLINE( 397)		bool _hx_tmp;
HXDLIN( 397)		if ((::Math_obj::abs(this1->x) < ((Float)0.0000001))) {
HXLINE( 397)			_hx_tmp = (::Math_obj::abs(this1->y) < ((Float)0.0000001));
            		}
            		else {
HXLINE( 397)			_hx_tmp = false;
            		}
HXDLIN( 397)		if (_hx_tmp) {
HXLINE( 399)			return this1;
            		}
HXLINE( 401)		return this1->scale((( (Float)(1) ) / ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y)))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,normalize,return )

bool FlxVector_Impl__obj::isNormalized( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_409_isNormalized)
HXDLIN( 409)		return (::Math_obj::abs((((this1->x * this1->x) + (this1->y * this1->y)) - ( (Float)(1) ))) < ((Float)9.9999999999999984e-015));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,isNormalized,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::rotateByRadians( ::flixel::math::FlxPoint this1,Float rads){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_419_rotateByRadians)
HXLINE( 420)		Float s = ::Math_obj::sin(rads);
HXLINE( 421)		Float c = ::Math_obj::cos(rads);
HXLINE( 422)		Float tempX = this1->x;
HXLINE( 424)		this1->set_x(((tempX * c) - (this1->y * s)));
HXLINE( 425)		this1->set_y(((tempX * s) + (this1->y * c)));
HXLINE( 427)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,rotateByRadians,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::rotateByDegrees( ::flixel::math::FlxPoint this1,Float degs){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_438_rotateByDegrees)
HXDLIN( 438)		Float rads = (degs * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN( 438)		Float s = ::Math_obj::sin(rads);
HXDLIN( 438)		Float c = ::Math_obj::cos(rads);
HXDLIN( 438)		Float tempX = this1->x;
HXDLIN( 438)		this1->set_x(((tempX * c) - (this1->y * s)));
HXDLIN( 438)		this1->set_y(((tempX * s) + (this1->y * c)));
HXDLIN( 438)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,rotateByDegrees,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::rotateWithTrig( ::flixel::math::FlxPoint this1,Float sin,Float cos){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_449_rotateWithTrig)
HXLINE( 450)		Float tempX = this1->x;
HXLINE( 451)		this1->set_x(((tempX * cos) - (this1->y * sin)));
HXLINE( 452)		this1->set_y(((tempX * sin) + (this1->y * cos)));
HXLINE( 453)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVector_Impl__obj,rotateWithTrig,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::setPolarRadians( ::flixel::math::FlxPoint this1,Float length,Float radians){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_466_setPolarRadians)
HXLINE( 467)		this1->set_x((length * ::Math_obj::cos(radians)));
HXLINE( 468)		this1->set_y((length * ::Math_obj::sin(radians)));
HXLINE( 469)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVector_Impl__obj,setPolarRadians,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::setPolarDegrees( ::flixel::math::FlxPoint this1,Float length,Float degrees){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_483_setPolarDegrees)
HXDLIN( 483)		return ::flixel::math::_FlxVector::FlxVector_Impl__obj::setPolarRadians(this1,length,(degrees * (::Math_obj::PI / ( (Float)(180) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVector_Impl__obj,setPolarDegrees,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::rightNormal( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint vec){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_490_rightNormal)
HXLINE( 491)		if (::hx::IsNull( vec )) {
HXLINE( 493)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 493)			point->_inPool = false;
HXDLIN( 493)			vec = point;
            		}
HXLINE( 495)		vec->set(-(this1->y),this1->x);
HXLINE( 496)		return vec;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,rightNormal,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::leftNormal( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint vec){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_503_leftNormal)
HXLINE( 504)		if (::hx::IsNull( vec )) {
HXLINE( 506)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 506)			point->_inPool = false;
HXDLIN( 506)			vec = point;
            		}
HXLINE( 508)		vec->set(this1->y,-(this1->x));
HXLINE( 509)		return vec;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,leftNormal,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::negate( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_516_negate)
HXLINE( 517)		this1->set_x((this1->x * ( (Float)(-1) )));
HXLINE( 518)		this1->set_y((this1->y * ( (Float)(-1) )));
HXLINE( 519)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,negate,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::negateNew( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_524_negateNew)
HXDLIN( 524)		 ::flixel::math::FlxPoint this2 = ::flixel::math::_FlxVector::FlxVector_Impl__obj::clone(this1,null());
HXDLIN( 524)		this2->set_x((this2->x * ( (Float)(-1) )));
HXDLIN( 524)		this2->set_y((this2->y * ( (Float)(-1) )));
HXDLIN( 524)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,negateNew,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::projectTo( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v, ::flixel::math::FlxPoint proj){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_536_projectTo)
HXLINE( 537)		Float dp = ((this1->x * v->x) + (this1->y * v->y));
HXLINE( 538)		Float lenSq = ((v->x * v->x) + (v->y * v->y));
HXLINE( 540)		if (::hx::IsNull( proj )) {
HXLINE( 542)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 542)			point->_inPool = false;
HXDLIN( 542)			proj = point;
            		}
HXLINE( 545)		proj->set(((dp * v->x) / lenSq),((dp * v->y) / lenSq));
HXLINE( 546)		if (v->_weak) {
HXLINE( 546)			v->put();
            		}
HXLINE( 547)		return proj;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVector_Impl__obj,projectTo,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::projectToNormalized( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v, ::flixel::math::FlxPoint proj){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_558_projectToNormalized)
HXLINE( 559)		 ::flixel::math::FlxPoint proj1 = proj;
HXDLIN( 559)		Float dp = ((this1->x * v->x) + (this1->y * v->y));
HXDLIN( 559)		if (::hx::IsNull( proj1 )) {
HXLINE( 559)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 559)			point->_inPool = false;
HXDLIN( 559)			proj1 = point;
            		}
HXDLIN( 559)		proj = proj1->set((dp * v->x),(dp * v->y));
HXLINE( 560)		if (v->_weak) {
HXLINE( 560)			v->put();
            		}
HXLINE( 561)		return proj;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVector_Impl__obj,projectToNormalized,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::projectToNormalizedWeak( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v, ::flixel::math::FlxPoint proj){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_573_projectToNormalizedWeak)
HXLINE( 574)		Float dp = ((this1->x * v->x) + (this1->y * v->y));
HXLINE( 576)		if (::hx::IsNull( proj )) {
HXLINE( 578)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 578)			point->_inPool = false;
HXDLIN( 578)			proj = point;
            		}
HXLINE( 581)		return proj->set((dp * v->x),(dp * v->y));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVector_Impl__obj,projectToNormalizedWeak,return )

Float FlxVector_Impl__obj::perpProduct( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_588_perpProduct)
HXLINE( 589)		Float pp = ((this1->y * v->x) + (-(this1->x) * v->y));
HXLINE( 590)		if (v->_weak) {
HXLINE( 590)			v->put();
            		}
HXLINE( 591)		return pp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,perpProduct,return )

Float FlxVector_Impl__obj::perpProductWeak( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_600_perpProductWeak)
HXDLIN( 600)		return ((this1->y * v->x) + (-(this1->x) * v->y));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,perpProductWeak,return )

Float FlxVector_Impl__obj::ratio( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_612_ratio)
HXLINE( 613)		Float r;
HXDLIN( 613)		if ((::Math_obj::abs(((this1->x * v->y) - (this1->y * v->x))) < ((Float)9.9999999999999984e-015))) {
HXLINE( 613)			r = ::Math_obj::NaN;
            		}
            		else {
HXLINE( 613)			bool r1;
HXDLIN( 613)			if (!((((this1->x * this1->x) + (this1->y * this1->y)) < ((Float)9.9999999999999984e-015)))) {
HXLINE( 613)				r1 = (((v->x * v->x) + (v->y * v->y)) < ((Float)9.9999999999999984e-015));
            			}
            			else {
HXLINE( 613)				r1 = true;
            			}
HXDLIN( 613)			if (r1) {
HXLINE( 613)				r = ::Math_obj::NaN;
            			}
            			else {
HXLINE( 613)				::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1 = ::flixel::math::_FlxVector::FlxVector_Impl__obj::clone(b,::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1);
HXDLIN( 613)				{
HXLINE( 613)					 ::flixel::math::FlxPoint _this = ::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1;
HXDLIN( 613)					_this->set_x((_this->x - a->x));
HXDLIN( 613)					_this->set_y((_this->y - a->y));
            				}
HXDLIN( 613)				 ::flixel::math::FlxPoint this2 = ::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1;
HXDLIN( 613)				r = (((this2->y * v->x) + (-(this2->x) * v->y)) / ((this1->y * v->x) + (-(this1->x) * v->y)));
            			}
            		}
HXLINE( 614)		if (a->_weak) {
HXLINE( 614)			a->put();
            		}
HXLINE( 615)		if (b->_weak) {
HXLINE( 615)			b->put();
            		}
HXLINE( 616)		if (v->_weak) {
HXLINE( 616)			v->put();
            		}
HXLINE( 617)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVector_Impl__obj,ratio,return )

Float FlxVector_Impl__obj::ratioWeak( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_630_ratioWeak)
HXLINE( 631)		if ((::Math_obj::abs(((this1->x * v->y) - (this1->y * v->x))) < ((Float)9.9999999999999984e-015))) {
HXLINE( 632)			return ::Math_obj::NaN;
            		}
HXLINE( 633)		bool _hx_tmp;
HXDLIN( 633)		if (!((((this1->x * this1->x) + (this1->y * this1->y)) < ((Float)9.9999999999999984e-015)))) {
HXLINE( 633)			_hx_tmp = (((v->x * v->x) + (v->y * v->y)) < ((Float)9.9999999999999984e-015));
            		}
            		else {
HXLINE( 633)			_hx_tmp = true;
            		}
HXDLIN( 633)		if (_hx_tmp) {
HXLINE( 634)			return ::Math_obj::NaN;
            		}
HXLINE( 636)		::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1 = ::flixel::math::_FlxVector::FlxVector_Impl__obj::clone(b,::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1);
HXLINE( 637)		{
HXLINE( 637)			 ::flixel::math::FlxPoint _this = ::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1;
HXDLIN( 637)			_this->set_x((_this->x - a->x));
HXDLIN( 637)			_this->set_y((_this->y - a->y));
            		}
HXLINE( 639)		 ::flixel::math::FlxPoint this2 = ::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1;
HXDLIN( 639)		return (((this2->y * v->x) + (-(this2->x) * v->y)) / ((this1->y * v->x) + (-(this1->x) * v->y)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVector_Impl__obj,ratioWeak,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::findIntersection( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::flixel::math::FlxPoint v, ::flixel::math::FlxPoint intersection){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_651_findIntersection)
HXLINE( 652)		Float t;
HXDLIN( 652)		if ((::Math_obj::abs(((this1->x * v->y) - (this1->y * v->x))) < ((Float)9.9999999999999984e-015))) {
HXLINE( 652)			t = ::Math_obj::NaN;
            		}
            		else {
HXLINE( 652)			bool t1;
HXDLIN( 652)			if (!((((this1->x * this1->x) + (this1->y * this1->y)) < ((Float)9.9999999999999984e-015)))) {
HXLINE( 652)				t1 = (((v->x * v->x) + (v->y * v->y)) < ((Float)9.9999999999999984e-015));
            			}
            			else {
HXLINE( 652)				t1 = true;
            			}
HXDLIN( 652)			if (t1) {
HXLINE( 652)				t = ::Math_obj::NaN;
            			}
            			else {
HXLINE( 652)				::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1 = ::flixel::math::_FlxVector::FlxVector_Impl__obj::clone(b,::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1);
HXDLIN( 652)				{
HXLINE( 652)					 ::flixel::math::FlxPoint _this = ::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1;
HXDLIN( 652)					_this->set_x((_this->x - a->x));
HXDLIN( 652)					_this->set_y((_this->y - a->y));
            				}
HXDLIN( 652)				 ::flixel::math::FlxPoint this2 = ::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1;
HXDLIN( 652)				t = (((this2->y * v->x) + (-(this2->x) * v->y)) / ((this1->y * v->x) + (-(this1->x) * v->y)));
            			}
            		}
HXLINE( 654)		if (::hx::IsNull( intersection )) {
HXLINE( 656)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 656)			point->_inPool = false;
HXDLIN( 656)			intersection = point;
            		}
HXLINE( 659)		if (::Math_obj::isNaN(t)) {
HXLINE( 661)			intersection->set(::Math_obj::NaN,::Math_obj::NaN);
            		}
            		else {
HXLINE( 665)			intersection->set((a->x + (t * this1->x)),(a->y + (t * this1->y)));
            		}
HXLINE( 668)		if (a->_weak) {
HXLINE( 668)			a->put();
            		}
HXLINE( 669)		if (b->_weak) {
HXLINE( 669)			b->put();
            		}
HXLINE( 670)		if (v->_weak) {
HXLINE( 670)			v->put();
            		}
HXLINE( 671)		return intersection;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVector_Impl__obj,findIntersection,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::findIntersectionInBounds( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::flixel::math::FlxPoint v, ::flixel::math::FlxPoint intersection){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_683_findIntersectionInBounds)
HXLINE( 684)		if (::hx::IsNull( intersection )) {
HXLINE( 686)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 686)			point->_inPool = false;
HXDLIN( 686)			intersection = point;
            		}
HXLINE( 689)		Float t1;
HXDLIN( 689)		if ((::Math_obj::abs(((this1->x * v->y) - (this1->y * v->x))) < ((Float)9.9999999999999984e-015))) {
HXLINE( 689)			t1 = ::Math_obj::NaN;
            		}
            		else {
HXLINE( 689)			bool t11;
HXDLIN( 689)			if (!((((this1->x * this1->x) + (this1->y * this1->y)) < ((Float)9.9999999999999984e-015)))) {
HXLINE( 689)				t11 = (((v->x * v->x) + (v->y * v->y)) < ((Float)9.9999999999999984e-015));
            			}
            			else {
HXLINE( 689)				t11 = true;
            			}
HXDLIN( 689)			if (t11) {
HXLINE( 689)				t1 = ::Math_obj::NaN;
            			}
            			else {
HXLINE( 689)				::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1 = ::flixel::math::_FlxVector::FlxVector_Impl__obj::clone(b,::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1);
HXDLIN( 689)				{
HXLINE( 689)					 ::flixel::math::FlxPoint _this = ::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1;
HXDLIN( 689)					_this->set_x((_this->x - a->x));
HXDLIN( 689)					_this->set_y((_this->y - a->y));
            				}
HXDLIN( 689)				 ::flixel::math::FlxPoint this2 = ::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1;
HXDLIN( 689)				t1 = (((this2->y * v->x) + (-(this2->x) * v->y)) / ((this1->y * v->x) + (-(this1->x) * v->y)));
            			}
            		}
HXLINE( 690)		Float t2;
HXDLIN( 690)		if ((::Math_obj::abs(((v->x * this1->y) - (v->y * this1->x))) < ((Float)9.9999999999999984e-015))) {
HXLINE( 690)			t2 = ::Math_obj::NaN;
            		}
            		else {
HXLINE( 690)			bool t21;
HXDLIN( 690)			if (!((((v->x * v->x) + (v->y * v->y)) < ((Float)9.9999999999999984e-015)))) {
HXLINE( 690)				t21 = (((this1->x * this1->x) + (this1->y * this1->y)) < ((Float)9.9999999999999984e-015));
            			}
            			else {
HXLINE( 690)				t21 = true;
            			}
HXDLIN( 690)			if (t21) {
HXLINE( 690)				t2 = ::Math_obj::NaN;
            			}
            			else {
HXLINE( 690)				::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1 = ::flixel::math::_FlxVector::FlxVector_Impl__obj::clone(a,::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1);
HXDLIN( 690)				{
HXLINE( 690)					 ::flixel::math::FlxPoint _this = ::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1;
HXDLIN( 690)					_this->set_x((_this->x - b->x));
HXDLIN( 690)					_this->set_y((_this->y - b->y));
            				}
HXDLIN( 690)				 ::flixel::math::FlxPoint this2 = ::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1;
HXDLIN( 690)				t2 = (((this2->y * this1->x) + (-(this2->x) * this1->y)) / ((v->y * this1->x) + (-(v->x) * this1->y)));
            			}
            		}
HXLINE( 691)		bool _hx_tmp;
HXDLIN( 691)		bool _hx_tmp1;
HXDLIN( 691)		bool _hx_tmp2;
HXDLIN( 691)		bool _hx_tmp3;
HXDLIN( 691)		bool _hx_tmp4;
HXDLIN( 691)		if (!(::Math_obj::isNaN(t1))) {
HXLINE( 691)			_hx_tmp4 = !(::Math_obj::isNaN(t2));
            		}
            		else {
HXLINE( 691)			_hx_tmp4 = false;
            		}
HXDLIN( 691)		if (_hx_tmp4) {
HXLINE( 691)			_hx_tmp3 = (t1 > 0);
            		}
            		else {
HXLINE( 691)			_hx_tmp3 = false;
            		}
HXDLIN( 691)		if (_hx_tmp3) {
HXLINE( 691)			_hx_tmp2 = (t1 <= 1);
            		}
            		else {
HXLINE( 691)			_hx_tmp2 = false;
            		}
HXDLIN( 691)		if (_hx_tmp2) {
HXLINE( 691)			_hx_tmp1 = (t2 > 0);
            		}
            		else {
HXLINE( 691)			_hx_tmp1 = false;
            		}
HXDLIN( 691)		if (_hx_tmp1) {
HXLINE( 691)			_hx_tmp = (t2 <= 1);
            		}
            		else {
HXLINE( 691)			_hx_tmp = false;
            		}
HXDLIN( 691)		if (_hx_tmp) {
HXLINE( 693)			intersection->set((a->x + (t1 * this1->x)),(a->y + (t1 * this1->y)));
            		}
            		else {
HXLINE( 697)			intersection->set(::Math_obj::NaN,::Math_obj::NaN);
            		}
HXLINE( 700)		if (a->_weak) {
HXLINE( 700)			a->put();
            		}
HXLINE( 701)		if (b->_weak) {
HXLINE( 701)			b->put();
            		}
HXLINE( 702)		if (v->_weak) {
HXLINE( 702)			v->put();
            		}
HXLINE( 703)		return intersection;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVector_Impl__obj,findIntersectionInBounds,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::truncate( ::flixel::math::FlxPoint this1,Float max){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_712_truncate)
HXLINE( 713)		{
HXLINE( 713)			Float l = ::Math_obj::min(max,::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y))));
HXDLIN( 713)			bool _hx_tmp;
HXDLIN( 713)			if ((::Math_obj::abs(this1->x) < ((Float)0.0000001))) {
HXLINE( 713)				_hx_tmp = (::Math_obj::abs(this1->y) < ((Float)0.0000001));
            			}
            			else {
HXLINE( 713)				_hx_tmp = false;
            			}
HXDLIN( 713)			if (!(_hx_tmp)) {
HXLINE( 713)				Float a = ::flixel::math::_FlxVector::FlxVector_Impl__obj::get_radians(this1);
HXDLIN( 713)				this1->set_x((l * ::Math_obj::cos(a)));
HXDLIN( 713)				this1->set_y((l * ::Math_obj::sin(a)));
            			}
            		}
HXLINE( 714)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,truncate,return )

Float FlxVector_Impl__obj::radiansBetween( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_724_radiansBetween)
HXLINE( 725)		Float rads = ::Math_obj::acos((((this1->x * v->x) + (this1->y * v->y)) / (::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y))) * ::Math_obj::sqrt(((v->x * v->x) + (v->y * v->y))))));
HXLINE( 726)		if (v->_weak) {
HXLINE( 726)			v->put();
            		}
HXLINE( 727)		return rads;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,radiansBetween,return )

Float FlxVector_Impl__obj::degreesBetween( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_738_degreesBetween)
HXDLIN( 738)		Float rads = ::Math_obj::acos((((this1->x * v->x) + (this1->y * v->y)) / (::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y))) * ::Math_obj::sqrt(((v->x * v->x) + (v->y * v->y))))));
HXDLIN( 738)		if (v->_weak) {
HXDLIN( 738)			v->put();
            		}
HXDLIN( 738)		return (rads * (( (Float)(180) ) / ::Math_obj::PI));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,degreesBetween,return )

int FlxVector_Impl__obj::sign( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_748_sign)
HXLINE( 749)		Float signFl = (((a->x - this1->x) * (b->y - this1->y)) - ((a->y - this1->y) * (b->x - this1->x)));
HXLINE( 750)		if (a->_weak) {
HXLINE( 750)			a->put();
            		}
HXLINE( 751)		if (b->_weak) {
HXLINE( 751)			b->put();
            		}
HXLINE( 752)		if ((signFl == 0)) {
HXLINE( 754)			return 0;
            		}
HXLINE( 756)		return ::Math_obj::round((signFl / ::Math_obj::abs(signFl)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVector_Impl__obj,sign,return )

Float FlxVector_Impl__obj::dist( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_764_dist)
HXDLIN( 764)		Float dx = (v->x - this1->x);
HXDLIN( 764)		Float dy = (v->y - this1->y);
HXDLIN( 764)		if (v->_weak) {
HXDLIN( 764)			v->put();
            		}
HXDLIN( 764)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,dist,return )

Float FlxVector_Impl__obj::distSquared( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_771_distSquared)
HXLINE( 772)		Float dx = (v->x - this1->x);
HXLINE( 773)		Float dy = (v->y - this1->y);
HXLINE( 774)		if (v->_weak) {
HXLINE( 774)			v->put();
            		}
HXLINE( 775)		return ((dx * dx) + (dy * dy));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,distSquared,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::bounce( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint normal,::hx::Null< Float >  __o_bounceCoeff){
            		Float bounceCoeff = __o_bounceCoeff.Default(1);
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_786_bounce)
HXLINE( 787)		Float d = ((1 + bounceCoeff) * ((this1->x * normal->x) + (this1->y * normal->y)));
HXLINE( 788)		this1->set_x((this1->x - (d * normal->x)));
HXLINE( 789)		this1->set_y((this1->y - (d * normal->y)));
HXLINE( 790)		if (normal->_weak) {
HXLINE( 790)			normal->put();
            		}
HXLINE( 791)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVector_Impl__obj,bounce,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::bounceWithFriction( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint normal,::hx::Null< Float >  __o_bounceCoeff,::hx::Null< Float >  __o_friction){
            		Float bounceCoeff = __o_bounceCoeff.Default(1);
            		Float friction = __o_friction.Default(0);
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_803_bounceWithFriction)
HXLINE( 804)		 ::flixel::math::FlxPoint v = ::flixel::math::_FlxVector::FlxVector_Impl__obj::rightNormal(normal,::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector3);
HXDLIN( 804)		 ::flixel::math::FlxPoint proj = ::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector1;
HXDLIN( 804)		Float dp = ((this1->x * v->x) + (this1->y * v->y));
HXDLIN( 804)		if (::hx::IsNull( proj )) {
HXLINE( 804)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 804)			point->_inPool = false;
HXDLIN( 804)			proj = point;
            		}
HXDLIN( 804)		 ::flixel::math::FlxPoint p1 = proj->set((dp * v->x),(dp * v->y));
HXLINE( 805)		 ::flixel::math::FlxPoint proj1 = ::flixel::math::_FlxVector::FlxVector_Impl__obj::_vector2;
HXDLIN( 805)		Float dp1 = ((this1->x * normal->x) + (this1->y * normal->y));
HXDLIN( 805)		if (::hx::IsNull( proj1 )) {
HXLINE( 805)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 805)			point->_inPool = false;
HXDLIN( 805)			proj1 = point;
            		}
HXDLIN( 805)		 ::flixel::math::FlxPoint p2 = proj1->set((dp1 * normal->x),(dp1 * normal->y));
HXLINE( 806)		Float bounceX = -(p2->x);
HXLINE( 807)		Float bounceY = -(p2->y);
HXLINE( 808)		Float frictionX = p1->x;
HXLINE( 809)		Float frictionY = p1->y;
HXLINE( 810)		this1->set_x(((bounceX * bounceCoeff) + (frictionX * friction)));
HXLINE( 811)		this1->set_y(((bounceY * bounceCoeff) + (frictionY * friction)));
HXLINE( 812)		if (normal->_weak) {
HXLINE( 812)			normal->put();
            		}
HXLINE( 813)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVector_Impl__obj,bounceWithFriction,return )

bool FlxVector_Impl__obj::isValid( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_823_isValid)
HXDLIN( 823)		bool _hx_tmp;
HXDLIN( 823)		bool _hx_tmp1;
HXDLIN( 823)		if (!(::Math_obj::isNaN(this1->x))) {
HXDLIN( 823)			_hx_tmp1 = !(::Math_obj::isNaN(this1->y));
            		}
            		else {
HXDLIN( 823)			_hx_tmp1 = false;
            		}
HXDLIN( 823)		if (_hx_tmp1) {
HXDLIN( 823)			_hx_tmp = ::Math_obj::isFinite(this1->x);
            		}
            		else {
HXDLIN( 823)			_hx_tmp = false;
            		}
HXDLIN( 823)		if (_hx_tmp) {
HXDLIN( 823)			return ::Math_obj::isFinite(this1->y);
            		}
            		else {
HXDLIN( 823)			return false;
            		}
HXDLIN( 823)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,isValid,return )

 ::flixel::math::FlxPoint FlxVector_Impl__obj::clone( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint vec){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_833_clone)
HXLINE( 834)		if (::hx::IsNull( vec )) {
HXLINE( 836)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 836)			point->_inPool = false;
HXDLIN( 836)			vec = point;
            		}
HXLINE( 839)		vec->set_x(this1->x);
HXLINE( 840)		vec->set_y(this1->y);
HXLINE( 841)		return vec;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,clone,return )

Float FlxVector_Impl__obj::get_x( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_846_get_x)
HXDLIN( 846)		return this1->x;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,get_x,return )

Float FlxVector_Impl__obj::set_x( ::flixel::math::FlxPoint this1,Float x){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_851_set_x)
HXDLIN( 851)		return this1->set_x(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,set_x,return )

Float FlxVector_Impl__obj::get_y( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_856_get_y)
HXDLIN( 856)		return this1->y;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,get_y,return )

Float FlxVector_Impl__obj::set_y( ::flixel::math::FlxPoint this1,Float y){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_861_set_y)
HXDLIN( 861)		return this1->set_y(y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,set_y,return )

Float FlxVector_Impl__obj::get_dx( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_865_get_dx)
HXLINE( 866)		bool _hx_tmp;
HXDLIN( 866)		if ((::Math_obj::abs(this1->x) < ((Float)0.0000001))) {
HXLINE( 866)			_hx_tmp = (::Math_obj::abs(this1->y) < ((Float)0.0000001));
            		}
            		else {
HXLINE( 866)			_hx_tmp = false;
            		}
HXDLIN( 866)		if (_hx_tmp) {
HXLINE( 867)			return ( (Float)(0) );
            		}
HXLINE( 869)		return (this1->x / ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,get_dx,return )

Float FlxVector_Impl__obj::get_dy( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_873_get_dy)
HXLINE( 874)		bool _hx_tmp;
HXDLIN( 874)		if ((::Math_obj::abs(this1->x) < ((Float)0.0000001))) {
HXLINE( 874)			_hx_tmp = (::Math_obj::abs(this1->y) < ((Float)0.0000001));
            		}
            		else {
HXLINE( 874)			_hx_tmp = false;
            		}
HXDLIN( 874)		if (_hx_tmp) {
HXLINE( 875)			return ( (Float)(0) );
            		}
HXLINE( 877)		return (this1->y / ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,get_dy,return )

Float FlxVector_Impl__obj::get_length( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_882_get_length)
HXDLIN( 882)		return ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,get_length,return )

Float FlxVector_Impl__obj::set_length( ::flixel::math::FlxPoint this1,Float l){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_886_set_length)
HXLINE( 887)		bool _hx_tmp;
HXDLIN( 887)		if ((::Math_obj::abs(this1->x) < ((Float)0.0000001))) {
HXLINE( 887)			_hx_tmp = (::Math_obj::abs(this1->y) < ((Float)0.0000001));
            		}
            		else {
HXLINE( 887)			_hx_tmp = false;
            		}
HXDLIN( 887)		if (!(_hx_tmp)) {
HXLINE( 889)			Float a = ::flixel::math::_FlxVector::FlxVector_Impl__obj::get_radians(this1);
HXLINE( 890)			this1->set_x((l * ::Math_obj::cos(a)));
HXLINE( 891)			this1->set_y((l * ::Math_obj::sin(a)));
            		}
HXLINE( 893)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,set_length,return )

Float FlxVector_Impl__obj::get_lengthSquared( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_898_get_lengthSquared)
HXDLIN( 898)		return ((this1->x * this1->x) + (this1->y * this1->y));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,get_lengthSquared,return )

Float FlxVector_Impl__obj::get_degrees( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_903_get_degrees)
HXDLIN( 903)		Float _hx_tmp = ::flixel::math::_FlxVector::FlxVector_Impl__obj::get_radians(this1);
HXDLIN( 903)		return (_hx_tmp * (( (Float)(180) ) / ::Math_obj::PI));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,get_degrees,return )

Float FlxVector_Impl__obj::set_degrees( ::flixel::math::FlxPoint this1,Float degs){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_907_set_degrees)
HXLINE( 908)		{
HXLINE( 908)			Float rads = (degs * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN( 908)			Float len = ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y)));
HXDLIN( 908)			this1->set_x((len * ::Math_obj::cos(rads)));
HXDLIN( 908)			this1->set_y((len * ::Math_obj::sin(rads)));
            		}
HXLINE( 909)		return degs;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,set_degrees,return )

Float FlxVector_Impl__obj::get_radians( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_913_get_radians)
HXLINE( 914)		bool _hx_tmp;
HXDLIN( 914)		if ((::Math_obj::abs(this1->x) < ((Float)0.0000001))) {
HXLINE( 914)			_hx_tmp = (::Math_obj::abs(this1->y) < ((Float)0.0000001));
            		}
            		else {
HXLINE( 914)			_hx_tmp = false;
            		}
HXDLIN( 914)		if (_hx_tmp) {
HXLINE( 915)			return ( (Float)(0) );
            		}
HXLINE( 917)		return ::Math_obj::atan2(this1->y,this1->x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,get_radians,return )

Float FlxVector_Impl__obj::set_radians( ::flixel::math::FlxPoint this1,Float rads){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_921_set_radians)
HXLINE( 922)		Float len = ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y)));
HXLINE( 924)		this1->set_x((len * ::Math_obj::cos(rads)));
HXLINE( 925)		this1->set_y((len * ::Math_obj::sin(rads)));
HXLINE( 926)		return rads;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_Impl__obj,set_radians,return )

Float FlxVector_Impl__obj::get_rx( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_931_get_rx)
HXDLIN( 931)		return -(this1->y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,get_rx,return )

Float FlxVector_Impl__obj::get_ry( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_936_get_ry)
HXDLIN( 936)		return this1->x;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,get_ry,return )

Float FlxVector_Impl__obj::get_lx( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_941_get_lx)
HXDLIN( 941)		return this1->y;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,get_lx,return )

Float FlxVector_Impl__obj::get_ly( ::flixel::math::FlxPoint this1){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_946_get_ly)
HXDLIN( 946)		return -(this1->x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVector_Impl__obj,get_ly,return )

::Dynamic FlxVector_Impl__obj::get_pool(){
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_951_get_pool)
HXDLIN( 951)		return ::flixel::math::FlxPoint_obj::get_pool();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxVector_Impl__obj,get_pool,return )


FlxVector_Impl__obj::FlxVector_Impl__obj()
{
}

bool FlxVector_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { outValue = weak_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ceil") ) { outValue = ceil_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"zero") ) { outValue = zero_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sign") ) { outValue = sign_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"dist") ) { outValue = dist_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { outValue = scale_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"floor") ) { outValue = floor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"round") ) { outValue = round_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ratio") ) { outValue = ratio_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clone") ) { outValue = clone_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_x") ) { outValue = set_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_y") ) { outValue = set_y_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addNew") ) { outValue = addNew_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rotate") ) { outValue = rotate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isZero") ) { outValue = isZero_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"negate") ) { outValue = negate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bounce") ) { outValue = bounce_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_dx") ) { outValue = get_dx_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_dy") ) { outValue = get_dy_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_rx") ) { outValue = get_rx_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_ry") ) { outValue = get_ry_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_lx") ) { outValue = get_lx_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_ly") ) { outValue = get_ly_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isValid") ) { outValue = isValid_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addPoint") ) { outValue = addPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"subtract") ) { outValue = subtract_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scaleNew") ) { outValue = scaleNew_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { outValue = copyFrom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"truncate") ) { outValue = truncate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_pool") ) { outValue = get_pool_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { outValue = transform_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"normalize") ) { outValue = normalize_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"negateNew") ) { outValue = negateNew_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"projectTo") ) { outValue = projectTo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ratioWeak") ) { outValue = ratioWeak_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { outValue = dotProduct_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isParallel") ) { outValue = isParallel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"leftNormal") ) { outValue = leftNormal_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_length") ) { outValue = set_length_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subtractNew") ) { outValue = subtractNew_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rightNormal") ) { outValue = rightNormal_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"perpProduct") ) { outValue = perpProduct_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distSquared") ) { outValue = distSquared_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_degrees") ) { outValue = get_degrees_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_degrees") ) { outValue = set_degrees_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_radians") ) { outValue = get_radians_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_radians") ) { outValue = set_radians_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isNormalized") ) { outValue = isNormalized_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subtractPoint") ) { outValue = subtractPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { outValue = copyFromFlash_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dotProductWeak") ) { outValue = dotProductWeak_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isParallelWeak") ) { outValue = isParallelWeak_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rotateWithTrig") ) { outValue = rotateWithTrig_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"radiansBetween") ) { outValue = radiansBetween_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"degreesBetween") ) { outValue = degreesBetween_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isPerpendicular") ) { outValue = isPerpendicular_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rotateByRadians") ) { outValue = rotateByRadians_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rotateByDegrees") ) { outValue = rotateByDegrees_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPolarRadians") ) { outValue = setPolarRadians_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPolarDegrees") ) { outValue = setPolarDegrees_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"perpProductWeak") ) { outValue = perpProductWeak_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findIntersection") ) { outValue = findIntersection_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_lengthSquared") ) { outValue = get_lengthSquared_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"crossProductLength") ) { outValue = crossProductLength_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bounceWithFriction") ) { outValue = bounceWithFriction_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"projectToNormalized") ) { outValue = projectToNormalized_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"dotProdWithNormalizing") ) { outValue = dotProdWithNormalizing_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"crossProductLengthWeak") ) { outValue = crossProductLengthWeak_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"projectToNormalizedWeak") ) { outValue = projectToNormalizedWeak_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"findIntersectionInBounds") ) { outValue = findIntersectionInBounds_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxVector_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxVector_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &FlxVector_Impl__obj::EPSILON,HX_("EPSILON",4a,89,92,2c)},
	{::hx::fsFloat,(void *) &FlxVector_Impl__obj::EPSILON_SQUARED,HX_("EPSILON_SQUARED",d2,99,e6,6d)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(void *) &FlxVector_Impl__obj::_vector1,HX_("_vector1",8f,53,55,14)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(void *) &FlxVector_Impl__obj::_vector2,HX_("_vector2",90,53,55,14)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(void *) &FlxVector_Impl__obj::_vector3,HX_("_vector3",91,53,55,14)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxVector_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVector_Impl__obj::EPSILON,"EPSILON");
	HX_MARK_MEMBER_NAME(FlxVector_Impl__obj::EPSILON_SQUARED,"EPSILON_SQUARED");
	HX_MARK_MEMBER_NAME(FlxVector_Impl__obj::_vector1,"_vector1");
	HX_MARK_MEMBER_NAME(FlxVector_Impl__obj::_vector2,"_vector2");
	HX_MARK_MEMBER_NAME(FlxVector_Impl__obj::_vector3,"_vector3");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxVector_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVector_Impl__obj::EPSILON,"EPSILON");
	HX_VISIT_MEMBER_NAME(FlxVector_Impl__obj::EPSILON_SQUARED,"EPSILON_SQUARED");
	HX_VISIT_MEMBER_NAME(FlxVector_Impl__obj::_vector1,"_vector1");
	HX_VISIT_MEMBER_NAME(FlxVector_Impl__obj::_vector2,"_vector2");
	HX_VISIT_MEMBER_NAME(FlxVector_Impl__obj::_vector3,"_vector3");
};

#endif

::hx::Class FlxVector_Impl__obj::__mClass;

static ::String FlxVector_Impl__obj_sStaticFields[] = {
	HX_("EPSILON",4a,89,92,2c),
	HX_("EPSILON_SQUARED",d2,99,e6,6d),
	HX_("_vector1",8f,53,55,14),
	HX_("_vector2",90,53,55,14),
	HX_("_vector3",91,53,55,14),
	HX_("get",96,80,4e,00),
	HX_("weak",78,5c,f5,4e),
	HX_("_new",61,15,1f,3f),
	HX_("set",a2,9b,57,00),
	HX_("add",21,f2,49,00),
	HX_("addPoint",6f,da,ec,3f),
	HX_("subtract",14,75,11,f8),
	HX_("subtractPoint",9c,c6,66,44),
	HX_("scale",8a,ce,ce,78),
	HX_("scaleNew",f6,eb,58,01),
	HX_("addNew",bf,e0,04,9f),
	HX_("subtractNew",ac,77,f9,0b),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyFromFlash",71,a5,da,18),
	HX_("floor",cc,d1,96,02),
	HX_("ceil",05,1f,bd,41),
	HX_("round",4e,f8,65,ed),
	HX_("rotate",5b,46,20,cb),
	HX_("transform",6c,2d,93,45),
	HX_("dotProduct",a6,27,f0,3d),
	HX_("dotProductWeak",3e,7b,e2,64),
	HX_("dotProdWithNormalizing",c4,c2,75,68),
	HX_("isPerpendicular",60,10,79,24),
	HX_("crossProductLength",d5,45,1a,6f),
	HX_("crossProductLengthWeak",ed,dc,48,88),
	HX_("isParallel",d1,bc,a5,f8),
	HX_("isParallelWeak",e9,81,c1,94),
	HX_("isZero",32,d4,57,6e),
	HX_("zero",28,0f,f1,50),
	HX_("normalize",8d,37,a1,ab),
	HX_("isNormalized",c1,8c,8e,53),
	HX_("rotateByRadians",80,07,76,e7),
	HX_("rotateByDegrees",b5,a4,e0,fa),
	HX_("rotateWithTrig",7d,0f,08,e3),
	HX_("setPolarRadians",16,e5,81,3c),
	HX_("setPolarDegrees",4b,82,ec,4f),
	HX_("rightNormal",23,3f,ee,99),
	HX_("leftNormal",8e,2d,7a,5f),
	HX_("negate",c2,41,19,67),
	HX_("negateNew",be,4b,dc,c5),
	HX_("projectTo",b4,84,f8,94),
	HX_("projectToNormalized",0b,56,c9,3e),
	HX_("projectToNormalizedWeak",23,40,63,dc),
	HX_("perpProduct",7c,fe,93,f3),
	HX_("perpProductWeak",14,75,e9,1f),
	HX_("ratio",0b,35,24,e4),
	HX_("ratioWeak",23,9f,19,92),
	HX_("findIntersection",22,b0,83,ae),
	HX_("findIntersectionInBounds",7c,2e,11,2e),
	HX_("truncate",66,be,f9,ce),
	HX_("radiansBetween",76,05,c0,0e),
	HX_("degreesBetween",e1,a8,04,64),
	HX_("sign",3d,90,53,4c),
	HX_("dist",66,67,69,42),
	HX_("distSquared",61,a2,da,2a),
	HX_("bounce",88,85,1d,66),
	HX_("bounceWithFriction",c8,1e,a8,25),
	HX_("isValid",b2,18,3e,ce),
	HX_("clone",5d,13,63,48),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_dx",dd,ee,2f,a3),
	HX_("get_dy",de,ee,2f,a3),
	HX_("get_length",af,04,8f,8f),
	HX_("set_length",23,a3,0c,93),
	HX_("get_lengthSquared",38,30,b5,3b),
	HX_("get_degrees",be,43,55,c0),
	HX_("set_degrees",ca,4a,c2,ca),
	HX_("get_radians",89,a6,ea,ac),
	HX_("set_radians",95,ad,57,b7),
	HX_("get_rx",0f,fb,2f,a3),
	HX_("get_ry",10,fb,2f,a3),
	HX_("get_lx",d5,f5,2f,a3),
	HX_("get_ly",d6,f5,2f,a3),
	HX_("get_pool",65,3c,17,ca),
	::String(null())
};

void FlxVector_Impl__obj::__register()
{
	FlxVector_Impl__obj _hx_dummy;
	FlxVector_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math._FlxVector.FlxVector_Impl_",f1,01,b9,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxVector_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxVector_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxVector_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxVector_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxVector_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxVector_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxVector_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxVector_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_12_boot)
HXDLIN(  12)		EPSILON = ((Float)0.0000001);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_13_boot)
HXDLIN(  13)		EPSILON_SQUARED = ((Float)9.9999999999999984e-015);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxPoint _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5cc336e8df399df1_15_boot)
HXDLIN(  15)			 ::flixel::math::FlxPoint this1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXDLIN(  15)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_15_boot)
HXDLIN(  15)		_vector1 = ( ( ::flixel::math::FlxPoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxPoint _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5cc336e8df399df1_16_boot)
HXDLIN(  16)			 ::flixel::math::FlxPoint this1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXDLIN(  16)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_16_boot)
HXDLIN(  16)		_vector2 = ( ( ::flixel::math::FlxPoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxPoint _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5cc336e8df399df1_17_boot)
HXDLIN(  17)			 ::flixel::math::FlxPoint this1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXDLIN(  17)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_5cc336e8df399df1_17_boot)
HXDLIN(  17)		_vector3 = ( ( ::flixel::math::FlxPoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace flixel
} // end namespace math
} // end namespace _FlxVector
