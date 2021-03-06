// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/KeySpec.h>

#ifndef SCAPIX_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC_H
#define SCAPIX_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC_H

namespace scapix::java_api {

namespace java::math { class BigInteger; }

namespace javax::crypto::spec {

class DHPrivateKeySpec : public object_base<SCAPIX_META_STRING("javax/crypto/spec/DHPrivateKeySpec"),
	java::lang::Object,
	java::security::spec::KeySpec>
{
public:

	static ref<DHPrivateKeySpec> new_object(ref<java::math::BigInteger> x, ref<java::math::BigInteger> p, ref<java::math::BigInteger> g);
	ref<java::math::BigInteger> getX();
	ref<java::math::BigInteger> getP();
	ref<java::math::BigInteger> getG();

protected:

	DHPrivateKeySpec(handle_type h) : base_(h) {}

};

} // namespace javax::crypto::spec
} // namespace scapix::java_api

#include <scapix/java_api/java/math/BigInteger.h>

namespace scapix::java_api {
namespace javax::crypto::spec {

inline ref<DHPrivateKeySpec> DHPrivateKeySpec::new_object(ref<java::math::BigInteger> x, ref<java::math::BigInteger> p, ref<java::math::BigInteger> g) { return base_::new_object(x, p, g); }
inline ref<java::math::BigInteger> DHPrivateKeySpec::getX() { return call_method<SCAPIX_META_STRING("getX"), ref<java::math::BigInteger>>(); }
inline ref<java::math::BigInteger> DHPrivateKeySpec::getP() { return call_method<SCAPIX_META_STRING("getP"), ref<java::math::BigInteger>>(); }
inline ref<java::math::BigInteger> DHPrivateKeySpec::getG() { return call_method<SCAPIX_META_STRING("getG"), ref<java::math::BigInteger>>(); }

} // namespace javax::crypto::spec
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC_H
