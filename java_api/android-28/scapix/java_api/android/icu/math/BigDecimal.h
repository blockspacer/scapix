// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_ANDROID_ICU_MATH_BIGDECIMAL_H
#define SCAPIX_ANDROID_ICU_MATH_BIGDECIMAL_H

namespace scapix::java_api {

namespace android::icu::math { class MathContext; }
namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::math { class BigDecimal; }
namespace java::math { class BigInteger; }

namespace android::icu::math {

class BigDecimal : public object_base<SCAPIX_META_STRING("android/icu/math/BigDecimal"),
	java::lang::Number,
	java::io::Serializable,
	java::lang::Comparable>
{
public:

	static ref<android::icu::math::BigDecimal> ONE_();
	static jint ROUND_CEILING_();
	static jint ROUND_DOWN_();
	static jint ROUND_FLOOR_();
	static jint ROUND_HALF_DOWN_();
	static jint ROUND_HALF_EVEN_();
	static jint ROUND_HALF_UP_();
	static jint ROUND_UNNECESSARY_();
	static jint ROUND_UP_();
	static ref<android::icu::math::BigDecimal> TEN_();
	static ref<android::icu::math::BigDecimal> ZERO_();

	static ref<BigDecimal> new_object(ref<java::math::BigDecimal> bd);
	static ref<BigDecimal> new_object(ref<java::math::BigInteger> bi);
	static ref<BigDecimal> new_object(ref<java::math::BigInteger> bi, jint scale);
	static ref<BigDecimal> new_object(ref<link::java::array<jchar>> inchars);
	static ref<BigDecimal> new_object(ref<link::java::array<jchar>> inchars, jint offset, jint length);
	static ref<BigDecimal> new_object(jdouble num);
	static ref<BigDecimal> new_object(jint num);
	static ref<BigDecimal> new_object(jlong num);
	static ref<BigDecimal> new_object(ref<java::lang::String> string);
	ref<android::icu::math::BigDecimal> abs();
	ref<android::icu::math::BigDecimal> abs(ref<android::icu::math::MathContext> set);
	ref<android::icu::math::BigDecimal> add(ref<android::icu::math::BigDecimal> rhs);
	ref<android::icu::math::BigDecimal> add(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set);
	jint compareTo(ref<android::icu::math::BigDecimal> rhs);
	jint compareTo(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set);
	ref<android::icu::math::BigDecimal> divide(ref<android::icu::math::BigDecimal> rhs);
	ref<android::icu::math::BigDecimal> divide(ref<android::icu::math::BigDecimal> rhs, jint round);
	ref<android::icu::math::BigDecimal> divide(ref<android::icu::math::BigDecimal> rhs, jint scale, jint round);
	ref<android::icu::math::BigDecimal> divide(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set);
	ref<android::icu::math::BigDecimal> divideInteger(ref<android::icu::math::BigDecimal> rhs);
	ref<android::icu::math::BigDecimal> divideInteger(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set);
	ref<android::icu::math::BigDecimal> max(ref<android::icu::math::BigDecimal> rhs);
	ref<android::icu::math::BigDecimal> max(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set);
	ref<android::icu::math::BigDecimal> min(ref<android::icu::math::BigDecimal> rhs);
	ref<android::icu::math::BigDecimal> min(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set);
	ref<android::icu::math::BigDecimal> multiply(ref<android::icu::math::BigDecimal> rhs);
	ref<android::icu::math::BigDecimal> multiply(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set);
	ref<android::icu::math::BigDecimal> negate();
	ref<android::icu::math::BigDecimal> negate(ref<android::icu::math::MathContext> set);
	ref<android::icu::math::BigDecimal> plus();
	ref<android::icu::math::BigDecimal> plus(ref<android::icu::math::MathContext> set);
	ref<android::icu::math::BigDecimal> pow(ref<android::icu::math::BigDecimal> rhs);
	ref<android::icu::math::BigDecimal> pow(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set);
	ref<android::icu::math::BigDecimal> remainder(ref<android::icu::math::BigDecimal> rhs);
	ref<android::icu::math::BigDecimal> remainder(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set);
	ref<android::icu::math::BigDecimal> subtract(ref<android::icu::math::BigDecimal> rhs);
	ref<android::icu::math::BigDecimal> subtract(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set);
	jbyte byteValueExact();
	jdouble doubleValue();
	jboolean equals(ref<java::lang::Object> obj);
	jfloat floatValue();
	ref<java::lang::String> format(jint before, jint after);
	ref<java::lang::String> format(jint before, jint after, jint explaces, jint exdigits, jint exformint, jint exround);
	jint hashCode();
	jint intValue();
	jint intValueExact();
	jlong longValue();
	jlong longValueExact();
	ref<android::icu::math::BigDecimal> movePointLeft(jint n);
	ref<android::icu::math::BigDecimal> movePointRight(jint n);
	jint scale();
	ref<android::icu::math::BigDecimal> setScale(jint scale);
	ref<android::icu::math::BigDecimal> setScale(jint scale, jint round);
	jshort shortValueExact();
	jint signum();
	ref<java::math::BigDecimal> toBigDecimal();
	ref<java::math::BigInteger> toBigInteger();
	ref<java::math::BigInteger> toBigIntegerExact();
	ref<link::java::array<jchar>> toCharArray();
	ref<java::lang::String> toString();
	ref<java::math::BigInteger> unscaledValue();
	static ref<android::icu::math::BigDecimal> valueOf(jdouble dub);
	static ref<android::icu::math::BigDecimal> valueOf(jlong lint);
	static ref<android::icu::math::BigDecimal> valueOf(jlong lint, jint p2);

protected:

	BigDecimal(handle_type h) : base_(h) {}

};

} // namespace android::icu::math
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/math/MathContext.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigDecimal.h>
#include <scapix/java_api/java/math/BigInteger.h>

namespace scapix::java_api {
namespace android::icu::math {

inline ref<android::icu::math::BigDecimal> BigDecimal::ONE_() { return get_static_field<SCAPIX_META_STRING("ONE"), ref<android::icu::math::BigDecimal>>(); }
inline jint BigDecimal::ROUND_CEILING_() { return get_static_field<SCAPIX_META_STRING("ROUND_CEILING"), jint>(); }
inline jint BigDecimal::ROUND_DOWN_() { return get_static_field<SCAPIX_META_STRING("ROUND_DOWN"), jint>(); }
inline jint BigDecimal::ROUND_FLOOR_() { return get_static_field<SCAPIX_META_STRING("ROUND_FLOOR"), jint>(); }
inline jint BigDecimal::ROUND_HALF_DOWN_() { return get_static_field<SCAPIX_META_STRING("ROUND_HALF_DOWN"), jint>(); }
inline jint BigDecimal::ROUND_HALF_EVEN_() { return get_static_field<SCAPIX_META_STRING("ROUND_HALF_EVEN"), jint>(); }
inline jint BigDecimal::ROUND_HALF_UP_() { return get_static_field<SCAPIX_META_STRING("ROUND_HALF_UP"), jint>(); }
inline jint BigDecimal::ROUND_UNNECESSARY_() { return get_static_field<SCAPIX_META_STRING("ROUND_UNNECESSARY"), jint>(); }
inline jint BigDecimal::ROUND_UP_() { return get_static_field<SCAPIX_META_STRING("ROUND_UP"), jint>(); }
inline ref<android::icu::math::BigDecimal> BigDecimal::TEN_() { return get_static_field<SCAPIX_META_STRING("TEN"), ref<android::icu::math::BigDecimal>>(); }
inline ref<android::icu::math::BigDecimal> BigDecimal::ZERO_() { return get_static_field<SCAPIX_META_STRING("ZERO"), ref<android::icu::math::BigDecimal>>(); }
inline ref<BigDecimal> BigDecimal::new_object(ref<java::math::BigDecimal> bd) { return base_::new_object(bd); }
inline ref<BigDecimal> BigDecimal::new_object(ref<java::math::BigInteger> bi) { return base_::new_object(bi); }
inline ref<BigDecimal> BigDecimal::new_object(ref<java::math::BigInteger> bi, jint scale) { return base_::new_object(bi, scale); }
inline ref<BigDecimal> BigDecimal::new_object(ref<link::java::array<jchar>> inchars) { return base_::new_object(inchars); }
inline ref<BigDecimal> BigDecimal::new_object(ref<link::java::array<jchar>> inchars, jint offset, jint length) { return base_::new_object(inchars, offset, length); }
inline ref<BigDecimal> BigDecimal::new_object(jdouble num) { return base_::new_object(num); }
inline ref<BigDecimal> BigDecimal::new_object(jint num) { return base_::new_object(num); }
inline ref<BigDecimal> BigDecimal::new_object(jlong num) { return base_::new_object(num); }
inline ref<BigDecimal> BigDecimal::new_object(ref<java::lang::String> string) { return base_::new_object(string); }
inline ref<android::icu::math::BigDecimal> BigDecimal::abs() { return call_method<SCAPIX_META_STRING("abs"), ref<android::icu::math::BigDecimal>>(); }
inline ref<android::icu::math::BigDecimal> BigDecimal::abs(ref<android::icu::math::MathContext> set) { return call_method<SCAPIX_META_STRING("abs"), ref<android::icu::math::BigDecimal>>(set); }
inline ref<android::icu::math::BigDecimal> BigDecimal::add(ref<android::icu::math::BigDecimal> rhs) { return call_method<SCAPIX_META_STRING("add"), ref<android::icu::math::BigDecimal>>(rhs); }
inline ref<android::icu::math::BigDecimal> BigDecimal::add(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set) { return call_method<SCAPIX_META_STRING("add"), ref<android::icu::math::BigDecimal>>(rhs, set); }
inline jint BigDecimal::compareTo(ref<android::icu::math::BigDecimal> rhs) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(rhs); }
inline jint BigDecimal::compareTo(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(rhs, set); }
inline ref<android::icu::math::BigDecimal> BigDecimal::divide(ref<android::icu::math::BigDecimal> rhs) { return call_method<SCAPIX_META_STRING("divide"), ref<android::icu::math::BigDecimal>>(rhs); }
inline ref<android::icu::math::BigDecimal> BigDecimal::divide(ref<android::icu::math::BigDecimal> rhs, jint round) { return call_method<SCAPIX_META_STRING("divide"), ref<android::icu::math::BigDecimal>>(rhs, round); }
inline ref<android::icu::math::BigDecimal> BigDecimal::divide(ref<android::icu::math::BigDecimal> rhs, jint scale, jint round) { return call_method<SCAPIX_META_STRING("divide"), ref<android::icu::math::BigDecimal>>(rhs, scale, round); }
inline ref<android::icu::math::BigDecimal> BigDecimal::divide(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set) { return call_method<SCAPIX_META_STRING("divide"), ref<android::icu::math::BigDecimal>>(rhs, set); }
inline ref<android::icu::math::BigDecimal> BigDecimal::divideInteger(ref<android::icu::math::BigDecimal> rhs) { return call_method<SCAPIX_META_STRING("divideInteger"), ref<android::icu::math::BigDecimal>>(rhs); }
inline ref<android::icu::math::BigDecimal> BigDecimal::divideInteger(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set) { return call_method<SCAPIX_META_STRING("divideInteger"), ref<android::icu::math::BigDecimal>>(rhs, set); }
inline ref<android::icu::math::BigDecimal> BigDecimal::max(ref<android::icu::math::BigDecimal> rhs) { return call_method<SCAPIX_META_STRING("max"), ref<android::icu::math::BigDecimal>>(rhs); }
inline ref<android::icu::math::BigDecimal> BigDecimal::max(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set) { return call_method<SCAPIX_META_STRING("max"), ref<android::icu::math::BigDecimal>>(rhs, set); }
inline ref<android::icu::math::BigDecimal> BigDecimal::min(ref<android::icu::math::BigDecimal> rhs) { return call_method<SCAPIX_META_STRING("min"), ref<android::icu::math::BigDecimal>>(rhs); }
inline ref<android::icu::math::BigDecimal> BigDecimal::min(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set) { return call_method<SCAPIX_META_STRING("min"), ref<android::icu::math::BigDecimal>>(rhs, set); }
inline ref<android::icu::math::BigDecimal> BigDecimal::multiply(ref<android::icu::math::BigDecimal> rhs) { return call_method<SCAPIX_META_STRING("multiply"), ref<android::icu::math::BigDecimal>>(rhs); }
inline ref<android::icu::math::BigDecimal> BigDecimal::multiply(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set) { return call_method<SCAPIX_META_STRING("multiply"), ref<android::icu::math::BigDecimal>>(rhs, set); }
inline ref<android::icu::math::BigDecimal> BigDecimal::negate() { return call_method<SCAPIX_META_STRING("negate"), ref<android::icu::math::BigDecimal>>(); }
inline ref<android::icu::math::BigDecimal> BigDecimal::negate(ref<android::icu::math::MathContext> set) { return call_method<SCAPIX_META_STRING("negate"), ref<android::icu::math::BigDecimal>>(set); }
inline ref<android::icu::math::BigDecimal> BigDecimal::plus() { return call_method<SCAPIX_META_STRING("plus"), ref<android::icu::math::BigDecimal>>(); }
inline ref<android::icu::math::BigDecimal> BigDecimal::plus(ref<android::icu::math::MathContext> set) { return call_method<SCAPIX_META_STRING("plus"), ref<android::icu::math::BigDecimal>>(set); }
inline ref<android::icu::math::BigDecimal> BigDecimal::pow(ref<android::icu::math::BigDecimal> rhs) { return call_method<SCAPIX_META_STRING("pow"), ref<android::icu::math::BigDecimal>>(rhs); }
inline ref<android::icu::math::BigDecimal> BigDecimal::pow(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set) { return call_method<SCAPIX_META_STRING("pow"), ref<android::icu::math::BigDecimal>>(rhs, set); }
inline ref<android::icu::math::BigDecimal> BigDecimal::remainder(ref<android::icu::math::BigDecimal> rhs) { return call_method<SCAPIX_META_STRING("remainder"), ref<android::icu::math::BigDecimal>>(rhs); }
inline ref<android::icu::math::BigDecimal> BigDecimal::remainder(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set) { return call_method<SCAPIX_META_STRING("remainder"), ref<android::icu::math::BigDecimal>>(rhs, set); }
inline ref<android::icu::math::BigDecimal> BigDecimal::subtract(ref<android::icu::math::BigDecimal> rhs) { return call_method<SCAPIX_META_STRING("subtract"), ref<android::icu::math::BigDecimal>>(rhs); }
inline ref<android::icu::math::BigDecimal> BigDecimal::subtract(ref<android::icu::math::BigDecimal> rhs, ref<android::icu::math::MathContext> set) { return call_method<SCAPIX_META_STRING("subtract"), ref<android::icu::math::BigDecimal>>(rhs, set); }
inline jbyte BigDecimal::byteValueExact() { return call_method<SCAPIX_META_STRING("byteValueExact"), jbyte>(); }
inline jdouble BigDecimal::doubleValue() { return call_method<SCAPIX_META_STRING("doubleValue"), jdouble>(); }
inline jboolean BigDecimal::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jfloat BigDecimal::floatValue() { return call_method<SCAPIX_META_STRING("floatValue"), jfloat>(); }
inline ref<java::lang::String> BigDecimal::format(jint before, jint after) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(before, after); }
inline ref<java::lang::String> BigDecimal::format(jint before, jint after, jint explaces, jint exdigits, jint exformint, jint exround) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(before, after, explaces, exdigits, exformint, exround); }
inline jint BigDecimal::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jint BigDecimal::intValue() { return call_method<SCAPIX_META_STRING("intValue"), jint>(); }
inline jint BigDecimal::intValueExact() { return call_method<SCAPIX_META_STRING("intValueExact"), jint>(); }
inline jlong BigDecimal::longValue() { return call_method<SCAPIX_META_STRING("longValue"), jlong>(); }
inline jlong BigDecimal::longValueExact() { return call_method<SCAPIX_META_STRING("longValueExact"), jlong>(); }
inline ref<android::icu::math::BigDecimal> BigDecimal::movePointLeft(jint n) { return call_method<SCAPIX_META_STRING("movePointLeft"), ref<android::icu::math::BigDecimal>>(n); }
inline ref<android::icu::math::BigDecimal> BigDecimal::movePointRight(jint n) { return call_method<SCAPIX_META_STRING("movePointRight"), ref<android::icu::math::BigDecimal>>(n); }
inline jint BigDecimal::scale() { return call_method<SCAPIX_META_STRING("scale"), jint>(); }
inline ref<android::icu::math::BigDecimal> BigDecimal::setScale(jint scale) { return call_method<SCAPIX_META_STRING("setScale"), ref<android::icu::math::BigDecimal>>(scale); }
inline ref<android::icu::math::BigDecimal> BigDecimal::setScale(jint scale, jint round) { return call_method<SCAPIX_META_STRING("setScale"), ref<android::icu::math::BigDecimal>>(scale, round); }
inline jshort BigDecimal::shortValueExact() { return call_method<SCAPIX_META_STRING("shortValueExact"), jshort>(); }
inline jint BigDecimal::signum() { return call_method<SCAPIX_META_STRING("signum"), jint>(); }
inline ref<java::math::BigDecimal> BigDecimal::toBigDecimal() { return call_method<SCAPIX_META_STRING("toBigDecimal"), ref<java::math::BigDecimal>>(); }
inline ref<java::math::BigInteger> BigDecimal::toBigInteger() { return call_method<SCAPIX_META_STRING("toBigInteger"), ref<java::math::BigInteger>>(); }
inline ref<java::math::BigInteger> BigDecimal::toBigIntegerExact() { return call_method<SCAPIX_META_STRING("toBigIntegerExact"), ref<java::math::BigInteger>>(); }
inline ref<link::java::array<jchar>> BigDecimal::toCharArray() { return call_method<SCAPIX_META_STRING("toCharArray"), ref<link::java::array<jchar>>>(); }
inline ref<java::lang::String> BigDecimal::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::math::BigInteger> BigDecimal::unscaledValue() { return call_method<SCAPIX_META_STRING("unscaledValue"), ref<java::math::BigInteger>>(); }
inline ref<android::icu::math::BigDecimal> BigDecimal::valueOf(jdouble dub) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::icu::math::BigDecimal>>(dub); }
inline ref<android::icu::math::BigDecimal> BigDecimal::valueOf(jlong lint) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::icu::math::BigDecimal>>(lint); }
inline ref<android::icu::math::BigDecimal> BigDecimal::valueOf(jlong lint, jint p2) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::icu::math::BigDecimal>>(lint, p2); }

} // namespace android::icu::math
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_MATH_BIGDECIMAL_H
