// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ICU_LANG_UCHARACTERENUMS_H
#define SCAPIX_ANDROID_ICU_LANG_UCHARACTERENUMS_H

namespace scapix::java_api {

namespace android::icu::lang { class UCharacterEnums_ECharacterDirection; }
namespace android::icu::lang { class UCharacterEnums_ECharacterCategory; }

namespace android::icu::lang {

class UCharacterEnums : public object_base<SCAPIX_META_STRING("android/icu/lang/UCharacterEnums"),
	java::lang::Object>
{
public:

	using ECharacterDirection = UCharacterEnums_ECharacterDirection;
	using ECharacterCategory = UCharacterEnums_ECharacterCategory;


protected:

	UCharacterEnums(handle_type h) : base_(h) {}

};

} // namespace android::icu::lang
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::icu::lang {


} // namespace android::icu::lang
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_LANG_UCHARACTERENUMS_H
