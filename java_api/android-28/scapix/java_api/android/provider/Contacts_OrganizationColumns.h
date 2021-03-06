// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CONTACTS_ORGANIZATIONCOLUMNS_H
#define SCAPIX_ANDROID_PROVIDER_CONTACTS_ORGANIZATIONCOLUMNS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class Contacts_OrganizationColumns : public object_base<SCAPIX_META_STRING("android/provider/Contacts$OrganizationColumns"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> COMPANY_();
	static ref<java::lang::String> ISPRIMARY_();
	static ref<java::lang::String> LABEL_();
	static ref<java::lang::String> PERSON_ID_();
	static ref<java::lang::String> TITLE_();
	static ref<java::lang::String> TYPE_();
	static jint TYPE_CUSTOM_();
	static jint TYPE_OTHER_();
	static jint TYPE_WORK_();


protected:

	Contacts_OrganizationColumns(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> Contacts_OrganizationColumns::COMPANY_() { return get_static_field<SCAPIX_META_STRING("COMPANY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_OrganizationColumns::ISPRIMARY_() { return get_static_field<SCAPIX_META_STRING("ISPRIMARY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_OrganizationColumns::LABEL_() { return get_static_field<SCAPIX_META_STRING("LABEL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_OrganizationColumns::PERSON_ID_() { return get_static_field<SCAPIX_META_STRING("PERSON_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_OrganizationColumns::TITLE_() { return get_static_field<SCAPIX_META_STRING("TITLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_OrganizationColumns::TYPE_() { return get_static_field<SCAPIX_META_STRING("TYPE"), ref<java::lang::String>>(); }
inline jint Contacts_OrganizationColumns::TYPE_CUSTOM_() { return get_static_field<SCAPIX_META_STRING("TYPE_CUSTOM"), jint>(); }
inline jint Contacts_OrganizationColumns::TYPE_OTHER_() { return get_static_field<SCAPIX_META_STRING("TYPE_OTHER"), jint>(); }
inline jint Contacts_OrganizationColumns::TYPE_WORK_() { return get_static_field<SCAPIX_META_STRING("TYPE_WORK"), jint>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CONTACTS_ORGANIZATIONCOLUMNS_H
