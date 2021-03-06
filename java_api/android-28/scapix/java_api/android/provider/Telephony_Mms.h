// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/Telephony_BaseMmsColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_TELEPHONY_MMS_H
#define SCAPIX_ANDROID_PROVIDER_TELEPHONY_MMS_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }
namespace android::provider { class Telephony_Mms_Sent; }
namespace android::provider { class Telephony_Mms_Rate; }
namespace android::provider { class Telephony_Mms_Part; }
namespace android::provider { class Telephony_Mms_Outbox; }
namespace android::provider { class Telephony_Mms_Intents; }
namespace android::provider { class Telephony_Mms_Inbox; }
namespace android::provider { class Telephony_Mms_Draft; }
namespace android::provider { class Telephony_Mms_Addr; }

namespace android::provider {

class Telephony_Mms : public object_base<SCAPIX_META_STRING("android/provider/Telephony$Mms"),
	java::lang::Object,
	android::provider::Telephony_BaseMmsColumns>
{
public:

	using Sent = Telephony_Mms_Sent;
	using Rate = Telephony_Mms_Rate;
	using Part = Telephony_Mms_Part;
	using Outbox = Telephony_Mms_Outbox;
	using Intents = Telephony_Mms_Intents;
	using Inbox = Telephony_Mms_Inbox;
	using Draft = Telephony_Mms_Draft;
	using Addr = Telephony_Mms_Addr;

	static ref<android::net::Uri> CONTENT_URI_();
	static ref<java::lang::String> DEFAULT_SORT_ORDER_();
	static ref<android::net::Uri> REPORT_REQUEST_URI_();
	static ref<android::net::Uri> REPORT_STATUS_URI_();


protected:

	Telephony_Mms(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<android::net::Uri> Telephony_Mms::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<java::lang::String> Telephony_Mms::DEFAULT_SORT_ORDER_() { return get_static_field<SCAPIX_META_STRING("DEFAULT_SORT_ORDER"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> Telephony_Mms::REPORT_REQUEST_URI_() { return get_static_field<SCAPIX_META_STRING("REPORT_REQUEST_URI"), ref<android::net::Uri>>(); }
inline ref<android::net::Uri> Telephony_Mms::REPORT_STATUS_URI_() { return get_static_field<SCAPIX_META_STRING("REPORT_STATUS_URI"), ref<android::net::Uri>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_TELEPHONY_MMS_H
