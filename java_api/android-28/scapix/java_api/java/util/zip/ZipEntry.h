// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_UTIL_ZIP_ZIPENTRY_H
#define SCAPIX_JAVA_UTIL_ZIP_ZIPENTRY_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::nio::file::attribute { class FileTime; }

namespace java::util::zip {

class ZipEntry : public object_base<SCAPIX_META_STRING("java/util/zip/ZipEntry"),
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jint CENATT_();
	static jint CENATX_();
	static jint CENCOM_();
	static jint CENCRC_();
	static jint CENDSK_();
	static jint CENEXT_();
	static jint CENFLG_();
	static jint CENHDR_();
	static jint CENHOW_();
	static jint CENLEN_();
	static jint CENNAM_();
	static jint CENOFF_();
	static jlong CENSIG_();
	static jint CENSIZ_();
	static jint CENTIM_();
	static jint CENVEM_();
	static jint CENVER_();
	static jint DEFLATED_();
	static jint ENDCOM_();
	static jint ENDHDR_();
	static jint ENDOFF_();
	static jlong ENDSIG_();
	static jint ENDSIZ_();
	static jint ENDSUB_();
	static jint ENDTOT_();
	static jint EXTCRC_();
	static jint EXTHDR_();
	static jint EXTLEN_();
	static jlong EXTSIG_();
	static jint EXTSIZ_();
	static jint LOCCRC_();
	static jint LOCEXT_();
	static jint LOCFLG_();
	static jint LOCHDR_();
	static jint LOCHOW_();
	static jint LOCLEN_();
	static jint LOCNAM_();
	static jlong LOCSIG_();
	static jint LOCSIZ_();
	static jint LOCTIM_();
	static jint LOCVER_();
	static jint STORED_();

	static ref<ZipEntry> new_object(ref<java::lang::String> name);
	static ref<ZipEntry> new_object(ref<java::util::zip::ZipEntry> e);
	ref<java::lang::String> getName();
	void setTime(jlong time);
	jlong getTime();
	ref<java::util::zip::ZipEntry> setLastModifiedTime(ref<java::nio::file::attribute::FileTime> time);
	ref<java::nio::file::attribute::FileTime> getLastModifiedTime();
	ref<java::util::zip::ZipEntry> setLastAccessTime(ref<java::nio::file::attribute::FileTime> time);
	ref<java::nio::file::attribute::FileTime> getLastAccessTime();
	ref<java::util::zip::ZipEntry> setCreationTime(ref<java::nio::file::attribute::FileTime> time);
	ref<java::nio::file::attribute::FileTime> getCreationTime();
	void setSize(jlong size);
	jlong getSize();
	jlong getCompressedSize();
	void setCompressedSize(jlong csize);
	void setCrc(jlong crc);
	jlong getCrc();
	void setMethod(jint method);
	jint getMethod();
	void setExtra(ref<link::java::array<jbyte>> extra);
	ref<link::java::array<jbyte>> getExtra();
	void setComment(ref<java::lang::String> comment);
	ref<java::lang::String> getComment();
	jboolean isDirectory();
	ref<java::lang::String> toString();
	jint hashCode();
	ref<java::lang::Object> clone();

protected:

	ZipEntry(handle_type h) : base_(h) {}

};

} // namespace java::util::zip
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/file/attribute/FileTime.h>

namespace scapix::java_api {
namespace java::util::zip {

inline jint ZipEntry::CENATT_() { return get_static_field<SCAPIX_META_STRING("CENATT"), jint>(); }
inline jint ZipEntry::CENATX_() { return get_static_field<SCAPIX_META_STRING("CENATX"), jint>(); }
inline jint ZipEntry::CENCOM_() { return get_static_field<SCAPIX_META_STRING("CENCOM"), jint>(); }
inline jint ZipEntry::CENCRC_() { return get_static_field<SCAPIX_META_STRING("CENCRC"), jint>(); }
inline jint ZipEntry::CENDSK_() { return get_static_field<SCAPIX_META_STRING("CENDSK"), jint>(); }
inline jint ZipEntry::CENEXT_() { return get_static_field<SCAPIX_META_STRING("CENEXT"), jint>(); }
inline jint ZipEntry::CENFLG_() { return get_static_field<SCAPIX_META_STRING("CENFLG"), jint>(); }
inline jint ZipEntry::CENHDR_() { return get_static_field<SCAPIX_META_STRING("CENHDR"), jint>(); }
inline jint ZipEntry::CENHOW_() { return get_static_field<SCAPIX_META_STRING("CENHOW"), jint>(); }
inline jint ZipEntry::CENLEN_() { return get_static_field<SCAPIX_META_STRING("CENLEN"), jint>(); }
inline jint ZipEntry::CENNAM_() { return get_static_field<SCAPIX_META_STRING("CENNAM"), jint>(); }
inline jint ZipEntry::CENOFF_() { return get_static_field<SCAPIX_META_STRING("CENOFF"), jint>(); }
inline jlong ZipEntry::CENSIG_() { return get_static_field<SCAPIX_META_STRING("CENSIG"), jlong>(); }
inline jint ZipEntry::CENSIZ_() { return get_static_field<SCAPIX_META_STRING("CENSIZ"), jint>(); }
inline jint ZipEntry::CENTIM_() { return get_static_field<SCAPIX_META_STRING("CENTIM"), jint>(); }
inline jint ZipEntry::CENVEM_() { return get_static_field<SCAPIX_META_STRING("CENVEM"), jint>(); }
inline jint ZipEntry::CENVER_() { return get_static_field<SCAPIX_META_STRING("CENVER"), jint>(); }
inline jint ZipEntry::DEFLATED_() { return get_static_field<SCAPIX_META_STRING("DEFLATED"), jint>(); }
inline jint ZipEntry::ENDCOM_() { return get_static_field<SCAPIX_META_STRING("ENDCOM"), jint>(); }
inline jint ZipEntry::ENDHDR_() { return get_static_field<SCAPIX_META_STRING("ENDHDR"), jint>(); }
inline jint ZipEntry::ENDOFF_() { return get_static_field<SCAPIX_META_STRING("ENDOFF"), jint>(); }
inline jlong ZipEntry::ENDSIG_() { return get_static_field<SCAPIX_META_STRING("ENDSIG"), jlong>(); }
inline jint ZipEntry::ENDSIZ_() { return get_static_field<SCAPIX_META_STRING("ENDSIZ"), jint>(); }
inline jint ZipEntry::ENDSUB_() { return get_static_field<SCAPIX_META_STRING("ENDSUB"), jint>(); }
inline jint ZipEntry::ENDTOT_() { return get_static_field<SCAPIX_META_STRING("ENDTOT"), jint>(); }
inline jint ZipEntry::EXTCRC_() { return get_static_field<SCAPIX_META_STRING("EXTCRC"), jint>(); }
inline jint ZipEntry::EXTHDR_() { return get_static_field<SCAPIX_META_STRING("EXTHDR"), jint>(); }
inline jint ZipEntry::EXTLEN_() { return get_static_field<SCAPIX_META_STRING("EXTLEN"), jint>(); }
inline jlong ZipEntry::EXTSIG_() { return get_static_field<SCAPIX_META_STRING("EXTSIG"), jlong>(); }
inline jint ZipEntry::EXTSIZ_() { return get_static_field<SCAPIX_META_STRING("EXTSIZ"), jint>(); }
inline jint ZipEntry::LOCCRC_() { return get_static_field<SCAPIX_META_STRING("LOCCRC"), jint>(); }
inline jint ZipEntry::LOCEXT_() { return get_static_field<SCAPIX_META_STRING("LOCEXT"), jint>(); }
inline jint ZipEntry::LOCFLG_() { return get_static_field<SCAPIX_META_STRING("LOCFLG"), jint>(); }
inline jint ZipEntry::LOCHDR_() { return get_static_field<SCAPIX_META_STRING("LOCHDR"), jint>(); }
inline jint ZipEntry::LOCHOW_() { return get_static_field<SCAPIX_META_STRING("LOCHOW"), jint>(); }
inline jint ZipEntry::LOCLEN_() { return get_static_field<SCAPIX_META_STRING("LOCLEN"), jint>(); }
inline jint ZipEntry::LOCNAM_() { return get_static_field<SCAPIX_META_STRING("LOCNAM"), jint>(); }
inline jlong ZipEntry::LOCSIG_() { return get_static_field<SCAPIX_META_STRING("LOCSIG"), jlong>(); }
inline jint ZipEntry::LOCSIZ_() { return get_static_field<SCAPIX_META_STRING("LOCSIZ"), jint>(); }
inline jint ZipEntry::LOCTIM_() { return get_static_field<SCAPIX_META_STRING("LOCTIM"), jint>(); }
inline jint ZipEntry::LOCVER_() { return get_static_field<SCAPIX_META_STRING("LOCVER"), jint>(); }
inline jint ZipEntry::STORED_() { return get_static_field<SCAPIX_META_STRING("STORED"), jint>(); }
inline ref<ZipEntry> ZipEntry::new_object(ref<java::lang::String> name) { return base_::new_object(name); }
inline ref<ZipEntry> ZipEntry::new_object(ref<java::util::zip::ZipEntry> e) { return base_::new_object(e); }
inline ref<java::lang::String> ZipEntry::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline void ZipEntry::setTime(jlong time) { return call_method<SCAPIX_META_STRING("setTime"), void>(time); }
inline jlong ZipEntry::getTime() { return call_method<SCAPIX_META_STRING("getTime"), jlong>(); }
inline ref<java::util::zip::ZipEntry> ZipEntry::setLastModifiedTime(ref<java::nio::file::attribute::FileTime> time) { return call_method<SCAPIX_META_STRING("setLastModifiedTime"), ref<java::util::zip::ZipEntry>>(time); }
inline ref<java::nio::file::attribute::FileTime> ZipEntry::getLastModifiedTime() { return call_method<SCAPIX_META_STRING("getLastModifiedTime"), ref<java::nio::file::attribute::FileTime>>(); }
inline ref<java::util::zip::ZipEntry> ZipEntry::setLastAccessTime(ref<java::nio::file::attribute::FileTime> time) { return call_method<SCAPIX_META_STRING("setLastAccessTime"), ref<java::util::zip::ZipEntry>>(time); }
inline ref<java::nio::file::attribute::FileTime> ZipEntry::getLastAccessTime() { return call_method<SCAPIX_META_STRING("getLastAccessTime"), ref<java::nio::file::attribute::FileTime>>(); }
inline ref<java::util::zip::ZipEntry> ZipEntry::setCreationTime(ref<java::nio::file::attribute::FileTime> time) { return call_method<SCAPIX_META_STRING("setCreationTime"), ref<java::util::zip::ZipEntry>>(time); }
inline ref<java::nio::file::attribute::FileTime> ZipEntry::getCreationTime() { return call_method<SCAPIX_META_STRING("getCreationTime"), ref<java::nio::file::attribute::FileTime>>(); }
inline void ZipEntry::setSize(jlong size) { return call_method<SCAPIX_META_STRING("setSize"), void>(size); }
inline jlong ZipEntry::getSize() { return call_method<SCAPIX_META_STRING("getSize"), jlong>(); }
inline jlong ZipEntry::getCompressedSize() { return call_method<SCAPIX_META_STRING("getCompressedSize"), jlong>(); }
inline void ZipEntry::setCompressedSize(jlong csize) { return call_method<SCAPIX_META_STRING("setCompressedSize"), void>(csize); }
inline void ZipEntry::setCrc(jlong crc) { return call_method<SCAPIX_META_STRING("setCrc"), void>(crc); }
inline jlong ZipEntry::getCrc() { return call_method<SCAPIX_META_STRING("getCrc"), jlong>(); }
inline void ZipEntry::setMethod(jint method) { return call_method<SCAPIX_META_STRING("setMethod"), void>(method); }
inline jint ZipEntry::getMethod() { return call_method<SCAPIX_META_STRING("getMethod"), jint>(); }
inline void ZipEntry::setExtra(ref<link::java::array<jbyte>> extra) { return call_method<SCAPIX_META_STRING("setExtra"), void>(extra); }
inline ref<link::java::array<jbyte>> ZipEntry::getExtra() { return call_method<SCAPIX_META_STRING("getExtra"), ref<link::java::array<jbyte>>>(); }
inline void ZipEntry::setComment(ref<java::lang::String> comment) { return call_method<SCAPIX_META_STRING("setComment"), void>(comment); }
inline ref<java::lang::String> ZipEntry::getComment() { return call_method<SCAPIX_META_STRING("getComment"), ref<java::lang::String>>(); }
inline jboolean ZipEntry::isDirectory() { return call_method<SCAPIX_META_STRING("isDirectory"), jboolean>(); }
inline ref<java::lang::String> ZipEntry::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint ZipEntry::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::Object> ZipEntry::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }

} // namespace java::util::zip
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_ZIP_ZIPENTRY_H
