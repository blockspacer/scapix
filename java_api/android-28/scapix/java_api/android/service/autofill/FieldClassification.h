// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SERVICE_AUTOFILL_FIELDCLASSIFICATION_H
#define SCAPIX_ANDROID_SERVICE_AUTOFILL_FIELDCLASSIFICATION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util { class List; }
namespace android::service::autofill { class FieldClassification_Match; }

namespace android::service::autofill {

class FieldClassification : public object_base<SCAPIX_META_STRING("android/service/autofill/FieldClassification"),
	java::lang::Object>
{
public:

	using Match = FieldClassification_Match;

	ref<java::util::List> getMatches();
	ref<java::lang::String> toString();

protected:

	FieldClassification(handle_type h) : base_(h) {}

};

} // namespace android::service::autofill
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::service::autofill {

inline ref<java::util::List> FieldClassification::getMatches() { return call_method<SCAPIX_META_STRING("getMatches"), ref<java::util::List>>(); }
inline ref<java::lang::String> FieldClassification::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::service::autofill
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_AUTOFILL_FIELDCLASSIFICATION_H
