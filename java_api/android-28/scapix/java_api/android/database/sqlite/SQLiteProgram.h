// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/database/sqlite/SQLiteClosable.h>

#ifndef SCAPIX_ANDROID_DATABASE_SQLITE_SQLITEPROGRAM_H
#define SCAPIX_ANDROID_DATABASE_SQLITE_SQLITEPROGRAM_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::database::sqlite {

class SQLiteProgram : public object_base<SCAPIX_META_STRING("android/database/sqlite/SQLiteProgram"),
	android::database::sqlite::SQLiteClosable>
{
public:

	jint getUniqueId();
	void bindNull(jint index);
	void bindLong(jint index, jlong value);
	void bindDouble(jint index, jdouble value);
	void bindString(jint index, ref<java::lang::String> value);
	void bindBlob(jint index, ref<link::java::array<jbyte>> value);
	void clearBindings();
	void bindAllArgsAsStrings(ref<link::java::array<java::lang::String>> bindArgs);

protected:

	SQLiteProgram(handle_type h) : base_(h) {}

};

} // namespace android::database::sqlite
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::database::sqlite {

inline jint SQLiteProgram::getUniqueId() { return call_method<SCAPIX_META_STRING("getUniqueId"), jint>(); }
inline void SQLiteProgram::bindNull(jint index) { return call_method<SCAPIX_META_STRING("bindNull"), void>(index); }
inline void SQLiteProgram::bindLong(jint index, jlong value) { return call_method<SCAPIX_META_STRING("bindLong"), void>(index, value); }
inline void SQLiteProgram::bindDouble(jint index, jdouble value) { return call_method<SCAPIX_META_STRING("bindDouble"), void>(index, value); }
inline void SQLiteProgram::bindString(jint index, ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("bindString"), void>(index, value); }
inline void SQLiteProgram::bindBlob(jint index, ref<link::java::array<jbyte>> value) { return call_method<SCAPIX_META_STRING("bindBlob"), void>(index, value); }
inline void SQLiteProgram::clearBindings() { return call_method<SCAPIX_META_STRING("clearBindings"), void>(); }
inline void SQLiteProgram::bindAllArgsAsStrings(ref<link::java::array<java::lang::String>> bindArgs) { return call_method<SCAPIX_META_STRING("bindAllArgsAsStrings"), void>(bindArgs); }

} // namespace android::database::sqlite
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_DATABASE_SQLITE_SQLITEPROGRAM_H
