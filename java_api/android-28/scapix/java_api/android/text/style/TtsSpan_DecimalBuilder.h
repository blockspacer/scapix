// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/TtsSpan_SemioticClassBuilder.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_DECIMALBUILDER_H
#define SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_DECIMALBUILDER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::text::style {

class TtsSpan_DecimalBuilder : public object_base<SCAPIX_META_STRING("android/text/style/TtsSpan$DecimalBuilder"),
	android::text::style::TtsSpan_SemioticClassBuilder>
{
public:

	static ref<TtsSpan_DecimalBuilder> new_object();
	static ref<TtsSpan_DecimalBuilder> new_object(jdouble number, jint p2, jint minimumFractionDigits);
	static ref<TtsSpan_DecimalBuilder> new_object(ref<java::lang::String> integerPart, ref<java::lang::String> fractionalPart);
	ref<android::text::style::TtsSpan_DecimalBuilder> setArgumentsFromDouble(jdouble number, jint p2, jint minimumFractionDigits);
	ref<android::text::style::TtsSpan_DecimalBuilder> setIntegerPart(jlong integerPart);
	ref<android::text::style::TtsSpan_DecimalBuilder> setIntegerPart(ref<java::lang::String> integerPart);
	ref<android::text::style::TtsSpan_DecimalBuilder> setFractionalPart(ref<java::lang::String> fractionalPart);

protected:

	TtsSpan_DecimalBuilder(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<TtsSpan_DecimalBuilder> TtsSpan_DecimalBuilder::new_object() { return base_::new_object(); }
inline ref<TtsSpan_DecimalBuilder> TtsSpan_DecimalBuilder::new_object(jdouble number, jint p2, jint minimumFractionDigits) { return base_::new_object(number, p2, minimumFractionDigits); }
inline ref<TtsSpan_DecimalBuilder> TtsSpan_DecimalBuilder::new_object(ref<java::lang::String> integerPart, ref<java::lang::String> fractionalPart) { return base_::new_object(integerPart, fractionalPart); }
inline ref<android::text::style::TtsSpan_DecimalBuilder> TtsSpan_DecimalBuilder::setArgumentsFromDouble(jdouble number, jint p2, jint minimumFractionDigits) { return call_method<SCAPIX_META_STRING("setArgumentsFromDouble"), ref<android::text::style::TtsSpan_DecimalBuilder>>(number, p2, minimumFractionDigits); }
inline ref<android::text::style::TtsSpan_DecimalBuilder> TtsSpan_DecimalBuilder::setIntegerPart(jlong integerPart) { return call_method<SCAPIX_META_STRING("setIntegerPart"), ref<android::text::style::TtsSpan_DecimalBuilder>>(integerPart); }
inline ref<android::text::style::TtsSpan_DecimalBuilder> TtsSpan_DecimalBuilder::setIntegerPart(ref<java::lang::String> integerPart) { return call_method<SCAPIX_META_STRING("setIntegerPart"), ref<android::text::style::TtsSpan_DecimalBuilder>>(integerPart); }
inline ref<android::text::style::TtsSpan_DecimalBuilder> TtsSpan_DecimalBuilder::setFractionalPart(ref<java::lang::String> fractionalPart) { return call_method<SCAPIX_META_STRING("setFractionalPart"), ref<android::text::style::TtsSpan_DecimalBuilder>>(fractionalPart); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_DECIMALBUILDER_H
