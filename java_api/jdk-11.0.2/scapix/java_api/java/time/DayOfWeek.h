// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>

#ifndef SCAPIX_JAVA_TIME_DAYOFWEEK_H
#define SCAPIX_JAVA_TIME_DAYOFWEEK_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::time::format { class TextStyle; }
namespace java::time::temporal { class Temporal; }
namespace java::time::temporal { class TemporalField; }
namespace java::time::temporal { class TemporalQuery; }
namespace java::time::temporal { class ValueRange; }
namespace java::util { class Locale; }

namespace java::time {

class DayOfWeek : public object_base<SCAPIX_META_STRING("java/time/DayOfWeek"),
	java::lang::Enum,
	java::time::temporal::TemporalAccessor,
	java::time::temporal::TemporalAdjuster>
{
public:

	static ref<java::time::DayOfWeek> MONDAY_();
	static ref<java::time::DayOfWeek> TUESDAY_();
	static ref<java::time::DayOfWeek> WEDNESDAY_();
	static ref<java::time::DayOfWeek> THURSDAY_();
	static ref<java::time::DayOfWeek> FRIDAY_();
	static ref<java::time::DayOfWeek> SATURDAY_();
	static ref<java::time::DayOfWeek> SUNDAY_();

	static ref<link::java::array<java::time::DayOfWeek>> values();
	static ref<java::time::DayOfWeek> valueOf(ref<java::lang::String> name);
	static ref<java::time::DayOfWeek> of(jint dayOfWeek);
	static ref<java::time::DayOfWeek> from(ref<java::time::temporal::TemporalAccessor> temporal);
	jint getValue();
	ref<java::lang::String> getDisplayName(ref<java::time::format::TextStyle> style, ref<java::util::Locale> locale);
	jboolean isSupported(ref<java::time::temporal::TemporalField> field);
	ref<java::time::temporal::ValueRange> range(ref<java::time::temporal::TemporalField> field);
	jint get(ref<java::time::temporal::TemporalField> field);
	jlong getLong(ref<java::time::temporal::TemporalField> field);
	ref<java::time::DayOfWeek> plus(jlong days);
	ref<java::time::DayOfWeek> minus(jlong days);
	ref<java::lang::Object> query(ref<java::time::temporal::TemporalQuery> query);
	ref<java::time::temporal::Temporal> adjustInto(ref<java::time::temporal::Temporal> temporal);

protected:

	DayOfWeek(handle_type h) : base_(h) {}

};

} // namespace java::time
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/format/TextStyle.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalQuery.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace java::time {

inline ref<java::time::DayOfWeek> DayOfWeek::MONDAY_() { return get_static_field<SCAPIX_META_STRING("MONDAY"), ref<java::time::DayOfWeek>>(); }
inline ref<java::time::DayOfWeek> DayOfWeek::TUESDAY_() { return get_static_field<SCAPIX_META_STRING("TUESDAY"), ref<java::time::DayOfWeek>>(); }
inline ref<java::time::DayOfWeek> DayOfWeek::WEDNESDAY_() { return get_static_field<SCAPIX_META_STRING("WEDNESDAY"), ref<java::time::DayOfWeek>>(); }
inline ref<java::time::DayOfWeek> DayOfWeek::THURSDAY_() { return get_static_field<SCAPIX_META_STRING("THURSDAY"), ref<java::time::DayOfWeek>>(); }
inline ref<java::time::DayOfWeek> DayOfWeek::FRIDAY_() { return get_static_field<SCAPIX_META_STRING("FRIDAY"), ref<java::time::DayOfWeek>>(); }
inline ref<java::time::DayOfWeek> DayOfWeek::SATURDAY_() { return get_static_field<SCAPIX_META_STRING("SATURDAY"), ref<java::time::DayOfWeek>>(); }
inline ref<java::time::DayOfWeek> DayOfWeek::SUNDAY_() { return get_static_field<SCAPIX_META_STRING("SUNDAY"), ref<java::time::DayOfWeek>>(); }
inline ref<link::java::array<java::time::DayOfWeek>> DayOfWeek::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<java::time::DayOfWeek>>>(); }
inline ref<java::time::DayOfWeek> DayOfWeek::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::time::DayOfWeek>>(name); }
inline ref<java::time::DayOfWeek> DayOfWeek::of(jint dayOfWeek) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::time::DayOfWeek>>(dayOfWeek); }
inline ref<java::time::DayOfWeek> DayOfWeek::from(ref<java::time::temporal::TemporalAccessor> temporal) { return call_static_method<SCAPIX_META_STRING("from"), ref<java::time::DayOfWeek>>(temporal); }
inline jint DayOfWeek::getValue() { return call_method<SCAPIX_META_STRING("getValue"), jint>(); }
inline ref<java::lang::String> DayOfWeek::getDisplayName(ref<java::time::format::TextStyle> style, ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("getDisplayName"), ref<java::lang::String>>(style, locale); }
inline jboolean DayOfWeek::isSupported(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("isSupported"), jboolean>(field); }
inline ref<java::time::temporal::ValueRange> DayOfWeek::range(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("range"), ref<java::time::temporal::ValueRange>>(field); }
inline jint DayOfWeek::get(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("get"), jint>(field); }
inline jlong DayOfWeek::getLong(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("getLong"), jlong>(field); }
inline ref<java::time::DayOfWeek> DayOfWeek::plus(jlong days) { return call_method<SCAPIX_META_STRING("plus"), ref<java::time::DayOfWeek>>(days); }
inline ref<java::time::DayOfWeek> DayOfWeek::minus(jlong days) { return call_method<SCAPIX_META_STRING("minus"), ref<java::time::DayOfWeek>>(days); }
inline ref<java::lang::Object> DayOfWeek::query(ref<java::time::temporal::TemporalQuery> query) { return call_method<SCAPIX_META_STRING("query"), ref<java::lang::Object>>(query); }
inline ref<java::time::temporal::Temporal> DayOfWeek::adjustInto(ref<java::time::temporal::Temporal> temporal) { return call_method<SCAPIX_META_STRING("adjustInto"), ref<java::time::temporal::Temporal>>(temporal); }

} // namespace java::time
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_DAYOFWEEK_H
