// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_TIME_MONTHDAY_H
#define SCAPIX_JAVA_TIME_MONTHDAY_H

namespace scapix::java_api {

namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace java::time { class Clock; }
namespace java::time { class LocalDate; }
namespace java::time { class Month; }
namespace java::time { class ZoneId; }
namespace java::time::format { class DateTimeFormatter; }
namespace java::time::temporal { class Temporal; }
namespace java::time::temporal { class TemporalField; }
namespace java::time::temporal { class TemporalQuery; }
namespace java::time::temporal { class ValueRange; }

namespace java::time {

class MonthDay : public object_base<SCAPIX_META_STRING("java/time/MonthDay"),
	java::lang::Object,
	java::time::temporal::TemporalAccessor,
	java::time::temporal::TemporalAdjuster,
	java::lang::Comparable,
	java::io::Serializable>
{
public:

	static ref<java::time::MonthDay> now();
	static ref<java::time::MonthDay> now(ref<java::time::ZoneId> zone);
	static ref<java::time::MonthDay> now(ref<java::time::Clock> clock);
	static ref<java::time::MonthDay> of(ref<java::time::Month> month, jint dayOfMonth);
	static ref<java::time::MonthDay> of(jint month, jint dayOfMonth);
	static ref<java::time::MonthDay> from(ref<java::time::temporal::TemporalAccessor> temporal);
	static ref<java::time::MonthDay> parse(ref<java::lang::CharSequence> text);
	static ref<java::time::MonthDay> parse(ref<java::lang::CharSequence> text, ref<java::time::format::DateTimeFormatter> formatter);
	jboolean isSupported(ref<java::time::temporal::TemporalField> field);
	ref<java::time::temporal::ValueRange> range(ref<java::time::temporal::TemporalField> field);
	jint get(ref<java::time::temporal::TemporalField> field);
	jlong getLong(ref<java::time::temporal::TemporalField> field);
	jint getMonthValue();
	ref<java::time::Month> getMonth();
	jint getDayOfMonth();
	jboolean isValidYear(jint year);
	ref<java::time::MonthDay> withMonth(jint month);
	ref<java::time::MonthDay> with(ref<java::time::Month> month);
	ref<java::time::MonthDay> withDayOfMonth(jint dayOfMonth);
	ref<java::lang::Object> query(ref<java::time::temporal::TemporalQuery> query);
	ref<java::time::temporal::Temporal> adjustInto(ref<java::time::temporal::Temporal> temporal);
	ref<java::lang::String> format(ref<java::time::format::DateTimeFormatter> formatter);
	ref<java::time::LocalDate> atYear(jint year);
	jint compareTo(ref<java::time::MonthDay> other);
	jboolean isAfter(ref<java::time::MonthDay> other);
	jboolean isBefore(ref<java::time::MonthDay> other);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	MonthDay(handle_type h) : base_(h) {}

};

} // namespace java::time
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/time/LocalDate.h>
#include <scapix/java_api/java/time/Month.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/format/DateTimeFormatter.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalQuery.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>

namespace scapix::java_api {
namespace java::time {

inline ref<java::time::MonthDay> MonthDay::now() { return call_static_method<SCAPIX_META_STRING("now"), ref<java::time::MonthDay>>(); }
inline ref<java::time::MonthDay> MonthDay::now(ref<java::time::ZoneId> zone) { return call_static_method<SCAPIX_META_STRING("now"), ref<java::time::MonthDay>>(zone); }
inline ref<java::time::MonthDay> MonthDay::now(ref<java::time::Clock> clock) { return call_static_method<SCAPIX_META_STRING("now"), ref<java::time::MonthDay>>(clock); }
inline ref<java::time::MonthDay> MonthDay::of(ref<java::time::Month> month, jint dayOfMonth) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::time::MonthDay>>(month, dayOfMonth); }
inline ref<java::time::MonthDay> MonthDay::of(jint month, jint dayOfMonth) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::time::MonthDay>>(month, dayOfMonth); }
inline ref<java::time::MonthDay> MonthDay::from(ref<java::time::temporal::TemporalAccessor> temporal) { return call_static_method<SCAPIX_META_STRING("from"), ref<java::time::MonthDay>>(temporal); }
inline ref<java::time::MonthDay> MonthDay::parse(ref<java::lang::CharSequence> text) { return call_static_method<SCAPIX_META_STRING("parse"), ref<java::time::MonthDay>>(text); }
inline ref<java::time::MonthDay> MonthDay::parse(ref<java::lang::CharSequence> text, ref<java::time::format::DateTimeFormatter> formatter) { return call_static_method<SCAPIX_META_STRING("parse"), ref<java::time::MonthDay>>(text, formatter); }
inline jboolean MonthDay::isSupported(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("isSupported"), jboolean>(field); }
inline ref<java::time::temporal::ValueRange> MonthDay::range(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("range"), ref<java::time::temporal::ValueRange>>(field); }
inline jint MonthDay::get(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("get"), jint>(field); }
inline jlong MonthDay::getLong(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("getLong"), jlong>(field); }
inline jint MonthDay::getMonthValue() { return call_method<SCAPIX_META_STRING("getMonthValue"), jint>(); }
inline ref<java::time::Month> MonthDay::getMonth() { return call_method<SCAPIX_META_STRING("getMonth"), ref<java::time::Month>>(); }
inline jint MonthDay::getDayOfMonth() { return call_method<SCAPIX_META_STRING("getDayOfMonth"), jint>(); }
inline jboolean MonthDay::isValidYear(jint year) { return call_method<SCAPIX_META_STRING("isValidYear"), jboolean>(year); }
inline ref<java::time::MonthDay> MonthDay::withMonth(jint month) { return call_method<SCAPIX_META_STRING("withMonth"), ref<java::time::MonthDay>>(month); }
inline ref<java::time::MonthDay> MonthDay::with(ref<java::time::Month> month) { return call_method<SCAPIX_META_STRING("with"), ref<java::time::MonthDay>>(month); }
inline ref<java::time::MonthDay> MonthDay::withDayOfMonth(jint dayOfMonth) { return call_method<SCAPIX_META_STRING("withDayOfMonth"), ref<java::time::MonthDay>>(dayOfMonth); }
inline ref<java::lang::Object> MonthDay::query(ref<java::time::temporal::TemporalQuery> query) { return call_method<SCAPIX_META_STRING("query"), ref<java::lang::Object>>(query); }
inline ref<java::time::temporal::Temporal> MonthDay::adjustInto(ref<java::time::temporal::Temporal> temporal) { return call_method<SCAPIX_META_STRING("adjustInto"), ref<java::time::temporal::Temporal>>(temporal); }
inline ref<java::lang::String> MonthDay::format(ref<java::time::format::DateTimeFormatter> formatter) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(formatter); }
inline ref<java::time::LocalDate> MonthDay::atYear(jint year) { return call_method<SCAPIX_META_STRING("atYear"), ref<java::time::LocalDate>>(year); }
inline jint MonthDay::compareTo(ref<java::time::MonthDay> other) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(other); }
inline jboolean MonthDay::isAfter(ref<java::time::MonthDay> other) { return call_method<SCAPIX_META_STRING("isAfter"), jboolean>(other); }
inline jboolean MonthDay::isBefore(ref<java::time::MonthDay> other) { return call_method<SCAPIX_META_STRING("isBefore"), jboolean>(other); }
inline jboolean MonthDay::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint MonthDay::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> MonthDay::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::time
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_MONTHDAY_H
