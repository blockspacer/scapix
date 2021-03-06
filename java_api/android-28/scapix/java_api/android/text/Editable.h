// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/android/text/GetChars.h>
#include <scapix/java_api/android/text/Spannable.h>
#include <scapix/java_api/java/lang/Appendable.h>

#ifndef SCAPIX_ANDROID_TEXT_EDITABLE_H
#define SCAPIX_ANDROID_TEXT_EDITABLE_H

namespace scapix::java_api {

namespace android::text { class InputFilter; }
namespace android::text { class Editable_Factory; }

namespace android::text {

class Editable : public object_base<SCAPIX_META_STRING("android/text/Editable"),
	java::lang::Object,
	java::lang::CharSequence,
	android::text::GetChars,
	android::text::Spannable,
	java::lang::Appendable>
{
public:

	using Factory = Editable_Factory;

	ref<android::text::Editable> replace(jint p1, jint p2, ref<java::lang::CharSequence> p3, jint p4, jint p5);
	ref<android::text::Editable> replace(jint p1, jint p2, ref<java::lang::CharSequence> p3);
	ref<android::text::Editable> insert(jint p1, ref<java::lang::CharSequence> p2, jint p3, jint p4);
	ref<android::text::Editable> insert(jint p1, ref<java::lang::CharSequence> p2);
	ref<android::text::Editable> delete_(jint p1, jint p2);
	ref<android::text::Editable> append(ref<java::lang::CharSequence> p1);
	ref<android::text::Editable> append(ref<java::lang::CharSequence> p1, jint p2, jint p3);
	ref<android::text::Editable> append(jchar p1);
	void clear();
	void clearSpans();
	void setFilters(ref<link::java::array<android::text::InputFilter>> p1);
	ref<link::java::array<android::text::InputFilter>> getFilters();

protected:

	Editable(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api

#include <scapix/java_api/android/text/InputFilter.h>

namespace scapix::java_api {
namespace android::text {

inline ref<android::text::Editable> Editable::replace(jint p1, jint p2, ref<java::lang::CharSequence> p3, jint p4, jint p5) { return call_method<SCAPIX_META_STRING("replace"), ref<android::text::Editable>>(p1, p2, p3, p4, p5); }
inline ref<android::text::Editable> Editable::replace(jint p1, jint p2, ref<java::lang::CharSequence> p3) { return call_method<SCAPIX_META_STRING("replace"), ref<android::text::Editable>>(p1, p2, p3); }
inline ref<android::text::Editable> Editable::insert(jint p1, ref<java::lang::CharSequence> p2, jint p3, jint p4) { return call_method<SCAPIX_META_STRING("insert"), ref<android::text::Editable>>(p1, p2, p3, p4); }
inline ref<android::text::Editable> Editable::insert(jint p1, ref<java::lang::CharSequence> p2) { return call_method<SCAPIX_META_STRING("insert"), ref<android::text::Editable>>(p1, p2); }
inline ref<android::text::Editable> Editable::delete_(jint p1, jint p2) { return call_method<SCAPIX_META_STRING("delete"), ref<android::text::Editable>>(p1, p2); }
inline ref<android::text::Editable> Editable::append(ref<java::lang::CharSequence> p1) { return call_method<SCAPIX_META_STRING("append"), ref<android::text::Editable>>(p1); }
inline ref<android::text::Editable> Editable::append(ref<java::lang::CharSequence> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("append"), ref<android::text::Editable>>(p1, p2, p3); }
inline ref<android::text::Editable> Editable::append(jchar p1) { return call_method<SCAPIX_META_STRING("append"), ref<android::text::Editable>>(p1); }
inline void Editable::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline void Editable::clearSpans() { return call_method<SCAPIX_META_STRING("clearSpans"), void>(); }
inline void Editable::setFilters(ref<link::java::array<android::text::InputFilter>> p1) { return call_method<SCAPIX_META_STRING("setFilters"), void>(p1); }
inline ref<link::java::array<android::text::InputFilter>> Editable::getFilters() { return call_method<SCAPIX_META_STRING("getFilters"), ref<link::java::array<android::text::InputFilter>>>(); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_EDITABLE_H
