// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/widget/AbsSpinner.h>
#include <scapix/java_api/android/view/GestureDetector_OnGestureListener.h>

#ifndef SCAPIX_ANDROID_WIDGET_GALLERY_H
#define SCAPIX_ANDROID_WIDGET_GALLERY_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }
namespace android::view { class KeyEvent; }
namespace android::view { class MotionEvent; }
namespace android::view { class View; }
namespace android::view { class ViewGroup_LayoutParams; }
namespace java::lang { class CharSequence; }
namespace android::widget { class Gallery_LayoutParams; }

namespace android::widget {

class Gallery : public object_base<SCAPIX_META_STRING("android/widget/Gallery"),
	android::widget::AbsSpinner,
	android::view::GestureDetector_OnGestureListener>
{
public:

	using LayoutParams = Gallery_LayoutParams;

	static ref<Gallery> new_object(ref<android::content::Context> context);
	static ref<Gallery> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	static ref<Gallery> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr);
	static ref<Gallery> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes);
	void setCallbackDuringFling(jboolean shouldCallback);
	void setAnimationDuration(jint animationDurationMillis);
	void setSpacing(jint spacing);
	void setUnselectedAlpha(jfloat unselectedAlpha);
	ref<android::view::ViewGroup_LayoutParams> generateLayoutParams(ref<android::util::AttributeSet> attrs);
	jboolean onTouchEvent(ref<android::view::MotionEvent> event);
	jboolean onSingleTapUp(ref<android::view::MotionEvent> e);
	jboolean onFling(ref<android::view::MotionEvent> e1, ref<android::view::MotionEvent> e2, jfloat velocityX, jfloat velocityY);
	jboolean onScroll(ref<android::view::MotionEvent> e1, ref<android::view::MotionEvent> e2, jfloat distanceX, jfloat distanceY);
	jboolean onDown(ref<android::view::MotionEvent> e);
	void onLongPress(ref<android::view::MotionEvent> e);
	void onShowPress(ref<android::view::MotionEvent> e);
	void dispatchSetSelected(jboolean selected);
	jboolean showContextMenuForChild(ref<android::view::View> originalView);
	jboolean showContextMenuForChild(ref<android::view::View> originalView, jfloat x, jfloat y);
	jboolean showContextMenu();
	jboolean showContextMenu(jfloat x, jfloat y);
	jboolean dispatchKeyEvent(ref<android::view::KeyEvent> event);
	jboolean onKeyDown(jint keyCode, ref<android::view::KeyEvent> event);
	jboolean onKeyUp(jint keyCode, ref<android::view::KeyEvent> event);
	void setGravity(jint gravity);
	ref<java::lang::CharSequence> getAccessibilityClassName();

protected:

	Gallery(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<Gallery> Gallery::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<Gallery> Gallery::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline ref<Gallery> Gallery::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
inline ref<Gallery> Gallery::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
inline void Gallery::setCallbackDuringFling(jboolean shouldCallback) { return call_method<SCAPIX_META_STRING("setCallbackDuringFling"), void>(shouldCallback); }
inline void Gallery::setAnimationDuration(jint animationDurationMillis) { return call_method<SCAPIX_META_STRING("setAnimationDuration"), void>(animationDurationMillis); }
inline void Gallery::setSpacing(jint spacing) { return call_method<SCAPIX_META_STRING("setSpacing"), void>(spacing); }
inline void Gallery::setUnselectedAlpha(jfloat unselectedAlpha) { return call_method<SCAPIX_META_STRING("setUnselectedAlpha"), void>(unselectedAlpha); }
inline ref<android::view::ViewGroup_LayoutParams> Gallery::generateLayoutParams(ref<android::util::AttributeSet> attrs) { return call_method<SCAPIX_META_STRING("generateLayoutParams"), ref<android::view::ViewGroup_LayoutParams>>(attrs); }
inline jboolean Gallery::onTouchEvent(ref<android::view::MotionEvent> event) { return call_method<SCAPIX_META_STRING("onTouchEvent"), jboolean>(event); }
inline jboolean Gallery::onSingleTapUp(ref<android::view::MotionEvent> e) { return call_method<SCAPIX_META_STRING("onSingleTapUp"), jboolean>(e); }
inline jboolean Gallery::onFling(ref<android::view::MotionEvent> e1, ref<android::view::MotionEvent> e2, jfloat velocityX, jfloat velocityY) { return call_method<SCAPIX_META_STRING("onFling"), jboolean>(e1, e2, velocityX, velocityY); }
inline jboolean Gallery::onScroll(ref<android::view::MotionEvent> e1, ref<android::view::MotionEvent> e2, jfloat distanceX, jfloat distanceY) { return call_method<SCAPIX_META_STRING("onScroll"), jboolean>(e1, e2, distanceX, distanceY); }
inline jboolean Gallery::onDown(ref<android::view::MotionEvent> e) { return call_method<SCAPIX_META_STRING("onDown"), jboolean>(e); }
inline void Gallery::onLongPress(ref<android::view::MotionEvent> e) { return call_method<SCAPIX_META_STRING("onLongPress"), void>(e); }
inline void Gallery::onShowPress(ref<android::view::MotionEvent> e) { return call_method<SCAPIX_META_STRING("onShowPress"), void>(e); }
inline void Gallery::dispatchSetSelected(jboolean selected) { return call_method<SCAPIX_META_STRING("dispatchSetSelected"), void>(selected); }
inline jboolean Gallery::showContextMenuForChild(ref<android::view::View> originalView) { return call_method<SCAPIX_META_STRING("showContextMenuForChild"), jboolean>(originalView); }
inline jboolean Gallery::showContextMenuForChild(ref<android::view::View> originalView, jfloat x, jfloat y) { return call_method<SCAPIX_META_STRING("showContextMenuForChild"), jboolean>(originalView, x, y); }
inline jboolean Gallery::showContextMenu() { return call_method<SCAPIX_META_STRING("showContextMenu"), jboolean>(); }
inline jboolean Gallery::showContextMenu(jfloat x, jfloat y) { return call_method<SCAPIX_META_STRING("showContextMenu"), jboolean>(x, y); }
inline jboolean Gallery::dispatchKeyEvent(ref<android::view::KeyEvent> event) { return call_method<SCAPIX_META_STRING("dispatchKeyEvent"), jboolean>(event); }
inline jboolean Gallery::onKeyDown(jint keyCode, ref<android::view::KeyEvent> event) { return call_method<SCAPIX_META_STRING("onKeyDown"), jboolean>(keyCode, event); }
inline jboolean Gallery::onKeyUp(jint keyCode, ref<android::view::KeyEvent> event) { return call_method<SCAPIX_META_STRING("onKeyUp"), jboolean>(keyCode, event); }
inline void Gallery::setGravity(jint gravity) { return call_method<SCAPIX_META_STRING("setGravity"), void>(gravity); }
inline ref<java::lang::CharSequence> Gallery::getAccessibilityClassName() { return call_method<SCAPIX_META_STRING("getAccessibilityClassName"), ref<java::lang::CharSequence>>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_GALLERY_H
