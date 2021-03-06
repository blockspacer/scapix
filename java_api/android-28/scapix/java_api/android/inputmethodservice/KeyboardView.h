// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/View_OnClickListener.h>

#ifndef SCAPIX_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_H
#define SCAPIX_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::graphics { class Canvas; }
namespace android::inputmethodservice { class Keyboard; }
namespace android::inputmethodservice { class KeyboardView_OnKeyboardActionListener; }
namespace android::util { class AttributeSet; }
namespace android::view { class MotionEvent; }

namespace android::inputmethodservice {

class KeyboardView : public object_base<SCAPIX_META_STRING("android/inputmethodservice/KeyboardView"),
	android::view::View,
	android::view::View_OnClickListener>
{
public:

	using OnKeyboardActionListener = KeyboardView_OnKeyboardActionListener;

	static ref<KeyboardView> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	static ref<KeyboardView> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr);
	static ref<KeyboardView> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes);
	void setOnKeyboardActionListener(ref<android::inputmethodservice::KeyboardView_OnKeyboardActionListener> listener);
	void setKeyboard(ref<android::inputmethodservice::Keyboard> keyboard);
	ref<android::inputmethodservice::Keyboard> getKeyboard();
	jboolean setShifted(jboolean shifted);
	jboolean isShifted();
	void setPreviewEnabled(jboolean previewEnabled);
	jboolean isPreviewEnabled();
	void setVerticalCorrection(jint verticalOffset);
	void setPopupParent(ref<android::view::View> v);
	void setPopupOffset(jint x, jint y);
	void setProximityCorrectionEnabled(jboolean enabled);
	jboolean isProximityCorrectionEnabled();
	void onClick(ref<android::view::View> v);
	void onMeasure(jint widthMeasureSpec, jint heightMeasureSpec);
	void onSizeChanged(jint w, jint h, jint oldw, jint oldh);
	void onDraw(ref<android::graphics::Canvas> canvas);
	void invalidateAllKeys();
	void invalidateKey(jint keyIndex);
	jboolean onHoverEvent(ref<android::view::MotionEvent> event);
	jboolean onTouchEvent(ref<android::view::MotionEvent> me);
	void closing();
	void onDetachedFromWindow();
	jboolean handleBack();

protected:

	KeyboardView(handle_type h) : base_(h) {}

};

} // namespace android::inputmethodservice
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/inputmethodservice/Keyboard.h>
#include <scapix/java_api/android/inputmethodservice/KeyboardView_OnKeyboardActionListener.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/MotionEvent.h>

namespace scapix::java_api {
namespace android::inputmethodservice {

inline ref<KeyboardView> KeyboardView::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline ref<KeyboardView> KeyboardView::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
inline ref<KeyboardView> KeyboardView::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
inline void KeyboardView::setOnKeyboardActionListener(ref<android::inputmethodservice::KeyboardView_OnKeyboardActionListener> listener) { return call_method<SCAPIX_META_STRING("setOnKeyboardActionListener"), void>(listener); }
inline void KeyboardView::setKeyboard(ref<android::inputmethodservice::Keyboard> keyboard) { return call_method<SCAPIX_META_STRING("setKeyboard"), void>(keyboard); }
inline ref<android::inputmethodservice::Keyboard> KeyboardView::getKeyboard() { return call_method<SCAPIX_META_STRING("getKeyboard"), ref<android::inputmethodservice::Keyboard>>(); }
inline jboolean KeyboardView::setShifted(jboolean shifted) { return call_method<SCAPIX_META_STRING("setShifted"), jboolean>(shifted); }
inline jboolean KeyboardView::isShifted() { return call_method<SCAPIX_META_STRING("isShifted"), jboolean>(); }
inline void KeyboardView::setPreviewEnabled(jboolean previewEnabled) { return call_method<SCAPIX_META_STRING("setPreviewEnabled"), void>(previewEnabled); }
inline jboolean KeyboardView::isPreviewEnabled() { return call_method<SCAPIX_META_STRING("isPreviewEnabled"), jboolean>(); }
inline void KeyboardView::setVerticalCorrection(jint verticalOffset) { return call_method<SCAPIX_META_STRING("setVerticalCorrection"), void>(verticalOffset); }
inline void KeyboardView::setPopupParent(ref<android::view::View> v) { return call_method<SCAPIX_META_STRING("setPopupParent"), void>(v); }
inline void KeyboardView::setPopupOffset(jint x, jint y) { return call_method<SCAPIX_META_STRING("setPopupOffset"), void>(x, y); }
inline void KeyboardView::setProximityCorrectionEnabled(jboolean enabled) { return call_method<SCAPIX_META_STRING("setProximityCorrectionEnabled"), void>(enabled); }
inline jboolean KeyboardView::isProximityCorrectionEnabled() { return call_method<SCAPIX_META_STRING("isProximityCorrectionEnabled"), jboolean>(); }
inline void KeyboardView::onClick(ref<android::view::View> v) { return call_method<SCAPIX_META_STRING("onClick"), void>(v); }
inline void KeyboardView::onMeasure(jint widthMeasureSpec, jint heightMeasureSpec) { return call_method<SCAPIX_META_STRING("onMeasure"), void>(widthMeasureSpec, heightMeasureSpec); }
inline void KeyboardView::onSizeChanged(jint w, jint h, jint oldw, jint oldh) { return call_method<SCAPIX_META_STRING("onSizeChanged"), void>(w, h, oldw, oldh); }
inline void KeyboardView::onDraw(ref<android::graphics::Canvas> canvas) { return call_method<SCAPIX_META_STRING("onDraw"), void>(canvas); }
inline void KeyboardView::invalidateAllKeys() { return call_method<SCAPIX_META_STRING("invalidateAllKeys"), void>(); }
inline void KeyboardView::invalidateKey(jint keyIndex) { return call_method<SCAPIX_META_STRING("invalidateKey"), void>(keyIndex); }
inline jboolean KeyboardView::onHoverEvent(ref<android::view::MotionEvent> event) { return call_method<SCAPIX_META_STRING("onHoverEvent"), jboolean>(event); }
inline jboolean KeyboardView::onTouchEvent(ref<android::view::MotionEvent> me) { return call_method<SCAPIX_META_STRING("onTouchEvent"), jboolean>(me); }
inline void KeyboardView::closing() { return call_method<SCAPIX_META_STRING("closing"), void>(); }
inline void KeyboardView::onDetachedFromWindow() { return call_method<SCAPIX_META_STRING("onDetachedFromWindow"), void>(); }
inline jboolean KeyboardView::handleBack() { return call_method<SCAPIX_META_STRING("handleBack"), jboolean>(); }

} // namespace android::inputmethodservice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_H
