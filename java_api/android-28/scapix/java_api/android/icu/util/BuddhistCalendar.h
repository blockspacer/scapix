// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/icu/util/GregorianCalendar.h>

#ifndef SCAPIX_ANDROID_ICU_UTIL_BUDDHISTCALENDAR_H
#define SCAPIX_ANDROID_ICU_UTIL_BUDDHISTCALENDAR_H

namespace scapix::java_api {

namespace android::icu::util { class TimeZone; }
namespace android::icu::util { class ULocale; }
namespace java::lang { class String; }
namespace java::util { class Date; }
namespace java::util { class Locale; }

namespace android::icu::util {

class BuddhistCalendar : public object_base<SCAPIX_META_STRING("android/icu/util/BuddhistCalendar"),
	android::icu::util::GregorianCalendar>
{
public:

	static jint BE_();

	static ref<BuddhistCalendar> new_object();
	static ref<BuddhistCalendar> new_object(ref<android::icu::util::TimeZone> zone);
	static ref<BuddhistCalendar> new_object(ref<java::util::Locale> aLocale);
	static ref<BuddhistCalendar> new_object(ref<android::icu::util::ULocale> locale);
	static ref<BuddhistCalendar> new_object(ref<android::icu::util::TimeZone> zone, ref<java::util::Locale> aLocale);
	static ref<BuddhistCalendar> new_object(ref<android::icu::util::TimeZone> zone, ref<android::icu::util::ULocale> locale);
	static ref<BuddhistCalendar> new_object(ref<java::util::Date> date);
	static ref<BuddhistCalendar> new_object(jint year, jint month, jint date);
	static ref<BuddhistCalendar> new_object(jint year, jint month, jint date, jint hour, jint minute, jint second);
	ref<java::lang::String> getType();

protected:

	BuddhistCalendar(handle_type h) : base_(h) {}

};

} // namespace android::icu::util
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/util/TimeZone.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace android::icu::util {

inline jint BuddhistCalendar::BE_() { return get_static_field<SCAPIX_META_STRING("BE"), jint>(); }
inline ref<BuddhistCalendar> BuddhistCalendar::new_object() { return base_::new_object(); }
inline ref<BuddhistCalendar> BuddhistCalendar::new_object(ref<android::icu::util::TimeZone> zone) { return base_::new_object(zone); }
inline ref<BuddhistCalendar> BuddhistCalendar::new_object(ref<java::util::Locale> aLocale) { return base_::new_object(aLocale); }
inline ref<BuddhistCalendar> BuddhistCalendar::new_object(ref<android::icu::util::ULocale> locale) { return base_::new_object(locale); }
inline ref<BuddhistCalendar> BuddhistCalendar::new_object(ref<android::icu::util::TimeZone> zone, ref<java::util::Locale> aLocale) { return base_::new_object(zone, aLocale); }
inline ref<BuddhistCalendar> BuddhistCalendar::new_object(ref<android::icu::util::TimeZone> zone, ref<android::icu::util::ULocale> locale) { return base_::new_object(zone, locale); }
inline ref<BuddhistCalendar> BuddhistCalendar::new_object(ref<java::util::Date> date) { return base_::new_object(date); }
inline ref<BuddhistCalendar> BuddhistCalendar::new_object(jint year, jint month, jint date) { return base_::new_object(year, month, date); }
inline ref<BuddhistCalendar> BuddhistCalendar::new_object(jint year, jint month, jint date, jint hour, jint minute, jint second) { return base_::new_object(year, month, date, hour, minute, second); }
inline ref<java::lang::String> BuddhistCalendar::getType() { return call_method<SCAPIX_META_STRING("getType"), ref<java::lang::String>>(); }

} // namespace android::icu::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_UTIL_BUDDHISTCALENDAR_H
