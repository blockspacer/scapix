// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_SECURITY_CERT_TRUSTANCHOR_H
#define SCAPIX_JAVA_SECURITY_CERT_TRUSTANCHOR_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::security { class PublicKey; }
namespace java::security::cert { class X509Certificate; }
namespace javax::security::auth::x500 { class X500Principal; }

namespace java::security::cert {

class TrustAnchor : public object_base<SCAPIX_META_STRING("java/security/cert/TrustAnchor"),
	java::lang::Object>
{
public:

	static ref<TrustAnchor> new_object(ref<java::security::cert::X509Certificate> trustedCert, ref<link::java::array<jbyte>> nameConstraints);
	static ref<TrustAnchor> new_object(ref<javax::security::auth::x500::X500Principal> caPrincipal, ref<java::security::PublicKey> pubKey, ref<link::java::array<jbyte>> nameConstraints);
	static ref<TrustAnchor> new_object(ref<java::lang::String> caName, ref<java::security::PublicKey> pubKey, ref<link::java::array<jbyte>> nameConstraints);
	ref<java::security::cert::X509Certificate> getTrustedCert();
	ref<javax::security::auth::x500::X500Principal> getCA();
	ref<java::lang::String> getCAName();
	ref<java::security::PublicKey> getCAPublicKey();
	ref<link::java::array<jbyte>> getNameConstraints();
	ref<java::lang::String> toString();

protected:

	TrustAnchor(handle_type h) : base_(h) {}

};

} // namespace java::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/PublicKey.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/javax/security/auth/x500/X500Principal.h>

namespace scapix::java_api {
namespace java::security::cert {

inline ref<TrustAnchor> TrustAnchor::new_object(ref<java::security::cert::X509Certificate> trustedCert, ref<link::java::array<jbyte>> nameConstraints) { return base_::new_object(trustedCert, nameConstraints); }
inline ref<TrustAnchor> TrustAnchor::new_object(ref<javax::security::auth::x500::X500Principal> caPrincipal, ref<java::security::PublicKey> pubKey, ref<link::java::array<jbyte>> nameConstraints) { return base_::new_object(caPrincipal, pubKey, nameConstraints); }
inline ref<TrustAnchor> TrustAnchor::new_object(ref<java::lang::String> caName, ref<java::security::PublicKey> pubKey, ref<link::java::array<jbyte>> nameConstraints) { return base_::new_object(caName, pubKey, nameConstraints); }
inline ref<java::security::cert::X509Certificate> TrustAnchor::getTrustedCert() { return call_method<SCAPIX_META_STRING("getTrustedCert"), ref<java::security::cert::X509Certificate>>(); }
inline ref<javax::security::auth::x500::X500Principal> TrustAnchor::getCA() { return call_method<SCAPIX_META_STRING("getCA"), ref<javax::security::auth::x500::X500Principal>>(); }
inline ref<java::lang::String> TrustAnchor::getCAName() { return call_method<SCAPIX_META_STRING("getCAName"), ref<java::lang::String>>(); }
inline ref<java::security::PublicKey> TrustAnchor::getCAPublicKey() { return call_method<SCAPIX_META_STRING("getCAPublicKey"), ref<java::security::PublicKey>>(); }
inline ref<link::java::array<jbyte>> TrustAnchor::getNameConstraints() { return call_method<SCAPIX_META_STRING("getNameConstraints"), ref<link::java::array<jbyte>>>(); }
inline ref<java::lang::String> TrustAnchor::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_CERT_TRUSTANCHOR_H
