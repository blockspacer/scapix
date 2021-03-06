// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_COMPACTDECIMALFORMAT_COMPACTSTYLE_H
#define SCAPIX_ANDROID_ICU_TEXT_COMPACTDECIMALFORMAT_COMPACTSTYLE_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::icu::text {

class CompactDecimalFormat_CompactStyle : public object_base<SCAPIX_META_STRING("android/icu/text/CompactDecimalFormat$CompactStyle"),
	java::lang::Enum>
{
public:

	static ref<android::icu::text::CompactDecimalFormat_CompactStyle> SHORT_();
	static ref<android::icu::text::CompactDecimalFormat_CompactStyle> LONG_();

	static ref<link::java::array<android::icu::text::CompactDecimalFormat_CompactStyle>> values();
	static ref<android::icu::text::CompactDecimalFormat_CompactStyle> valueOf(ref<java::lang::String> name);

protected:

	CompactDecimalFormat_CompactStyle(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::icu::text {

inline ref<android::icu::text::CompactDecimalFormat_CompactStyle> CompactDecimalFormat_CompactStyle::SHORT_() { return get_static_field<SCAPIX_META_STRING("SHORT"), ref<android::icu::text::CompactDecimalFormat_CompactStyle>>(); }
inline ref<android::icu::text::CompactDecimalFormat_CompactStyle> CompactDecimalFormat_CompactStyle::LONG_() { return get_static_field<SCAPIX_META_STRING("LONG"), ref<android::icu::text::CompactDecimalFormat_CompactStyle>>(); }
inline ref<link::java::array<android::icu::text::CompactDecimalFormat_CompactStyle>> CompactDecimalFormat_CompactStyle::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::icu::text::CompactDecimalFormat_CompactStyle>>>(); }
inline ref<android::icu::text::CompactDecimalFormat_CompactStyle> CompactDecimalFormat_CompactStyle::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::icu::text::CompactDecimalFormat_CompactStyle>>(name); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_COMPACTDECIMALFORMAT_COMPACTSTYLE_H
