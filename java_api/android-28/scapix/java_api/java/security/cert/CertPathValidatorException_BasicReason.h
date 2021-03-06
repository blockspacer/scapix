// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/java/security/cert/CertPathValidatorException_Reason.h>

#ifndef SCAPIX_JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_BASICREASON_H
#define SCAPIX_JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_BASICREASON_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::security::cert {

class CertPathValidatorException_BasicReason : public object_base<SCAPIX_META_STRING("java/security/cert/CertPathValidatorException$BasicReason"),
	java::lang::Enum,
	java::security::cert::CertPathValidatorException_Reason>
{
public:

	static ref<java::security::cert::CertPathValidatorException_BasicReason> UNSPECIFIED_();
	static ref<java::security::cert::CertPathValidatorException_BasicReason> EXPIRED_();
	static ref<java::security::cert::CertPathValidatorException_BasicReason> NOT_YET_VALID_();
	static ref<java::security::cert::CertPathValidatorException_BasicReason> REVOKED_();
	static ref<java::security::cert::CertPathValidatorException_BasicReason> UNDETERMINED_REVOCATION_STATUS_();
	static ref<java::security::cert::CertPathValidatorException_BasicReason> INVALID_SIGNATURE_();
	static ref<java::security::cert::CertPathValidatorException_BasicReason> ALGORITHM_CONSTRAINED_();

	static ref<link::java::array<java::security::cert::CertPathValidatorException_BasicReason>> values();
	static ref<java::security::cert::CertPathValidatorException_BasicReason> valueOf(ref<java::lang::String> name);

protected:

	CertPathValidatorException_BasicReason(handle_type h) : base_(h) {}

};

} // namespace java::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::security::cert {

inline ref<java::security::cert::CertPathValidatorException_BasicReason> CertPathValidatorException_BasicReason::UNSPECIFIED_() { return get_static_field<SCAPIX_META_STRING("UNSPECIFIED"), ref<java::security::cert::CertPathValidatorException_BasicReason>>(); }
inline ref<java::security::cert::CertPathValidatorException_BasicReason> CertPathValidatorException_BasicReason::EXPIRED_() { return get_static_field<SCAPIX_META_STRING("EXPIRED"), ref<java::security::cert::CertPathValidatorException_BasicReason>>(); }
inline ref<java::security::cert::CertPathValidatorException_BasicReason> CertPathValidatorException_BasicReason::NOT_YET_VALID_() { return get_static_field<SCAPIX_META_STRING("NOT_YET_VALID"), ref<java::security::cert::CertPathValidatorException_BasicReason>>(); }
inline ref<java::security::cert::CertPathValidatorException_BasicReason> CertPathValidatorException_BasicReason::REVOKED_() { return get_static_field<SCAPIX_META_STRING("REVOKED"), ref<java::security::cert::CertPathValidatorException_BasicReason>>(); }
inline ref<java::security::cert::CertPathValidatorException_BasicReason> CertPathValidatorException_BasicReason::UNDETERMINED_REVOCATION_STATUS_() { return get_static_field<SCAPIX_META_STRING("UNDETERMINED_REVOCATION_STATUS"), ref<java::security::cert::CertPathValidatorException_BasicReason>>(); }
inline ref<java::security::cert::CertPathValidatorException_BasicReason> CertPathValidatorException_BasicReason::INVALID_SIGNATURE_() { return get_static_field<SCAPIX_META_STRING("INVALID_SIGNATURE"), ref<java::security::cert::CertPathValidatorException_BasicReason>>(); }
inline ref<java::security::cert::CertPathValidatorException_BasicReason> CertPathValidatorException_BasicReason::ALGORITHM_CONSTRAINED_() { return get_static_field<SCAPIX_META_STRING("ALGORITHM_CONSTRAINED"), ref<java::security::cert::CertPathValidatorException_BasicReason>>(); }
inline ref<link::java::array<java::security::cert::CertPathValidatorException_BasicReason>> CertPathValidatorException_BasicReason::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<java::security::cert::CertPathValidatorException_BasicReason>>>(); }
inline ref<java::security::cert::CertPathValidatorException_BasicReason> CertPathValidatorException_BasicReason::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::security::cert::CertPathValidatorException_BasicReason>>(name); }

} // namespace java::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_BASICREASON_H
