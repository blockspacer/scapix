// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_LANG_MODULE_MODULEDESCRIPTOR_H
#define SCAPIX_JAVA_LANG_MODULE_MODULEDESCRIPTOR_H

namespace scapix::java_api {

namespace java::io { class InputStream; }
namespace java::lang { class String; }
namespace java::lang::module { class ModuleDescriptor_Builder; }
namespace java::nio { class ByteBuffer; }
namespace java::util { class Optional; }
namespace java::util { class Set; }
namespace java::util::function { class Supplier; }
namespace java::lang::module { class ModuleDescriptor_Version; }
namespace java::lang::module { class ModuleDescriptor_Provides; }
namespace java::lang::module { class ModuleDescriptor_Opens; }
namespace java::lang::module { class ModuleDescriptor_Exports; }
namespace java::lang::module { class ModuleDescriptor_Requires; }
namespace java::lang::module { class ModuleDescriptor_Modifier; }

namespace java::lang::module {

class ModuleDescriptor : public object_base<SCAPIX_META_STRING("java/lang/module/ModuleDescriptor"),
	java::lang::Object,
	java::lang::Comparable>
{
public:

	using Builder = ModuleDescriptor_Builder;
	using Version = ModuleDescriptor_Version;
	using Provides = ModuleDescriptor_Provides;
	using Opens = ModuleDescriptor_Opens;
	using Exports = ModuleDescriptor_Exports;
	using Requires = ModuleDescriptor_Requires;
	using Modifier = ModuleDescriptor_Modifier;

	ref<java::lang::String> name();
	ref<java::util::Set> modifiers();
	jboolean isOpen();
	jboolean isAutomatic();
	ref<java::util::Set> requires();
	ref<java::util::Set> exports();
	ref<java::util::Set> opens();
	ref<java::util::Set> uses();
	ref<java::util::Set> provides();
	ref<java::util::Optional> version();
	ref<java::util::Optional> rawVersion();
	ref<java::lang::String> toNameAndVersion();
	ref<java::util::Optional> mainClass();
	ref<java::util::Set> packages();
	jint compareTo(ref<java::lang::module::ModuleDescriptor> that);
	jboolean equals(ref<java::lang::Object> ob);
	jint hashCode();
	ref<java::lang::String> toString();
	static ref<java::lang::module::ModuleDescriptor_Builder> newModule(ref<java::lang::String> name, ref<java::util::Set> ms);
	static ref<java::lang::module::ModuleDescriptor_Builder> newModule(ref<java::lang::String> name);
	static ref<java::lang::module::ModuleDescriptor_Builder> newOpenModule(ref<java::lang::String> name);
	static ref<java::lang::module::ModuleDescriptor_Builder> newAutomaticModule(ref<java::lang::String> name);
	static ref<java::lang::module::ModuleDescriptor> read(ref<java::io::InputStream> in, ref<java::util::function::Supplier> packageFinder);
	static ref<java::lang::module::ModuleDescriptor> read(ref<java::io::InputStream> in);
	static ref<java::lang::module::ModuleDescriptor> read(ref<java::nio::ByteBuffer> bb, ref<java::util::function::Supplier> packageFinder);
	static ref<java::lang::module::ModuleDescriptor> read(ref<java::nio::ByteBuffer> bb);

protected:

	ModuleDescriptor(handle_type h) : base_(h) {}

};

} // namespace java::lang::module
} // namespace scapix::java_api

#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/module/ModuleDescriptor_Builder.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/function/Supplier.h>

namespace scapix::java_api {
namespace java::lang::module {

inline ref<java::lang::String> ModuleDescriptor::name() { return call_method<SCAPIX_META_STRING("name"), ref<java::lang::String>>(); }
inline ref<java::util::Set> ModuleDescriptor::modifiers() { return call_method<SCAPIX_META_STRING("modifiers"), ref<java::util::Set>>(); }
inline jboolean ModuleDescriptor::isOpen() { return call_method<SCAPIX_META_STRING("isOpen"), jboolean>(); }
inline jboolean ModuleDescriptor::isAutomatic() { return call_method<SCAPIX_META_STRING("isAutomatic"), jboolean>(); }
inline ref<java::util::Set> ModuleDescriptor::requires() { return call_method<SCAPIX_META_STRING("requires"), ref<java::util::Set>>(); }
inline ref<java::util::Set> ModuleDescriptor::exports() { return call_method<SCAPIX_META_STRING("exports"), ref<java::util::Set>>(); }
inline ref<java::util::Set> ModuleDescriptor::opens() { return call_method<SCAPIX_META_STRING("opens"), ref<java::util::Set>>(); }
inline ref<java::util::Set> ModuleDescriptor::uses() { return call_method<SCAPIX_META_STRING("uses"), ref<java::util::Set>>(); }
inline ref<java::util::Set> ModuleDescriptor::provides() { return call_method<SCAPIX_META_STRING("provides"), ref<java::util::Set>>(); }
inline ref<java::util::Optional> ModuleDescriptor::version() { return call_method<SCAPIX_META_STRING("version"), ref<java::util::Optional>>(); }
inline ref<java::util::Optional> ModuleDescriptor::rawVersion() { return call_method<SCAPIX_META_STRING("rawVersion"), ref<java::util::Optional>>(); }
inline ref<java::lang::String> ModuleDescriptor::toNameAndVersion() { return call_method<SCAPIX_META_STRING("toNameAndVersion"), ref<java::lang::String>>(); }
inline ref<java::util::Optional> ModuleDescriptor::mainClass() { return call_method<SCAPIX_META_STRING("mainClass"), ref<java::util::Optional>>(); }
inline ref<java::util::Set> ModuleDescriptor::packages() { return call_method<SCAPIX_META_STRING("packages"), ref<java::util::Set>>(); }
inline jint ModuleDescriptor::compareTo(ref<java::lang::module::ModuleDescriptor> that) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(that); }
inline jboolean ModuleDescriptor::equals(ref<java::lang::Object> ob) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(ob); }
inline jint ModuleDescriptor::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> ModuleDescriptor::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::lang::module::ModuleDescriptor_Builder> ModuleDescriptor::newModule(ref<java::lang::String> name, ref<java::util::Set> ms) { return call_static_method<SCAPIX_META_STRING("newModule"), ref<java::lang::module::ModuleDescriptor_Builder>>(name, ms); }
inline ref<java::lang::module::ModuleDescriptor_Builder> ModuleDescriptor::newModule(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("newModule"), ref<java::lang::module::ModuleDescriptor_Builder>>(name); }
inline ref<java::lang::module::ModuleDescriptor_Builder> ModuleDescriptor::newOpenModule(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("newOpenModule"), ref<java::lang::module::ModuleDescriptor_Builder>>(name); }
inline ref<java::lang::module::ModuleDescriptor_Builder> ModuleDescriptor::newAutomaticModule(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("newAutomaticModule"), ref<java::lang::module::ModuleDescriptor_Builder>>(name); }
inline ref<java::lang::module::ModuleDescriptor> ModuleDescriptor::read(ref<java::io::InputStream> in, ref<java::util::function::Supplier> packageFinder) { return call_static_method<SCAPIX_META_STRING("read"), ref<java::lang::module::ModuleDescriptor>>(in, packageFinder); }
inline ref<java::lang::module::ModuleDescriptor> ModuleDescriptor::read(ref<java::io::InputStream> in) { return call_static_method<SCAPIX_META_STRING("read"), ref<java::lang::module::ModuleDescriptor>>(in); }
inline ref<java::lang::module::ModuleDescriptor> ModuleDescriptor::read(ref<java::nio::ByteBuffer> bb, ref<java::util::function::Supplier> packageFinder) { return call_static_method<SCAPIX_META_STRING("read"), ref<java::lang::module::ModuleDescriptor>>(bb, packageFinder); }
inline ref<java::lang::module::ModuleDescriptor> ModuleDescriptor::read(ref<java::nio::ByteBuffer> bb) { return call_static_method<SCAPIX_META_STRING("read"), ref<java::lang::module::ModuleDescriptor>>(bb); }

} // namespace java::lang::module
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_MODULE_MODULEDESCRIPTOR_H
