// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_CAPITALIZE_H
#define SCAPIX_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_CAPITALIZE_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::text::method {

class TextKeyListener_Capitalize : public object_base<SCAPIX_META_STRING("android/text/method/TextKeyListener$Capitalize"),
	java::lang::Enum>
{
public:

	static ref<android::text::method::TextKeyListener_Capitalize> NONE_();
	static ref<android::text::method::TextKeyListener_Capitalize> SENTENCES_();
	static ref<android::text::method::TextKeyListener_Capitalize> WORDS_();
	static ref<android::text::method::TextKeyListener_Capitalize> CHARACTERS_();

	static ref<link::java::array<android::text::method::TextKeyListener_Capitalize>> values();
	static ref<android::text::method::TextKeyListener_Capitalize> valueOf(ref<java::lang::String> name);

protected:

	TextKeyListener_Capitalize(handle_type h) : base_(h) {}

};

} // namespace android::text::method
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::text::method {

inline ref<android::text::method::TextKeyListener_Capitalize> TextKeyListener_Capitalize::NONE_() { return get_static_field<SCAPIX_META_STRING("NONE"), ref<android::text::method::TextKeyListener_Capitalize>>(); }
inline ref<android::text::method::TextKeyListener_Capitalize> TextKeyListener_Capitalize::SENTENCES_() { return get_static_field<SCAPIX_META_STRING("SENTENCES"), ref<android::text::method::TextKeyListener_Capitalize>>(); }
inline ref<android::text::method::TextKeyListener_Capitalize> TextKeyListener_Capitalize::WORDS_() { return get_static_field<SCAPIX_META_STRING("WORDS"), ref<android::text::method::TextKeyListener_Capitalize>>(); }
inline ref<android::text::method::TextKeyListener_Capitalize> TextKeyListener_Capitalize::CHARACTERS_() { return get_static_field<SCAPIX_META_STRING("CHARACTERS"), ref<android::text::method::TextKeyListener_Capitalize>>(); }
inline ref<link::java::array<android::text::method::TextKeyListener_Capitalize>> TextKeyListener_Capitalize::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::text::method::TextKeyListener_Capitalize>>>(); }
inline ref<android::text::method::TextKeyListener_Capitalize> TextKeyListener_Capitalize::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::text::method::TextKeyListener_Capitalize>>(name); }

} // namespace android::text::method
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_CAPITALIZE_H
