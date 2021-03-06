// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8FontFaceSetForEachCallback_h
#define V8FontFaceSetForEachCallback_h

#include "bindings/core/v8/ActiveDOMCallback.h"
#include "bindings/core/v8/DOMWrapperWorld.h"
#include "bindings/core/v8/ScopedPersistent.h"
#include "core/CoreExport.h"
#include "core/css/FontFaceSetForEachCallback.h"

namespace blink {

class V8FontFaceSetForEachCallback final : public FontFaceSetForEachCallback, public ActiveDOMCallback {
    WILL_BE_USING_GARBAGE_COLLECTED_MIXIN(V8FontFaceSetForEachCallback);
public:
    static V8FontFaceSetForEachCallback* create(v8::Local<v8::Function> callback, ScriptState* scriptState)
    {
        return new V8FontFaceSetForEachCallback(callback, scriptState);
    }

    ~V8FontFaceSetForEachCallback() override;

    DECLARE_VIRTUAL_TRACE();

    bool handleItem(ScriptValue thisValue, FontFace* fontFace, FontFace* fontFaceAgain, FontFaceSet* set) override;
    bool handleItem(FontFace* fontFace, FontFace* fontFaceAgain, FontFaceSet* set) override;
private:
    CORE_EXPORT V8FontFaceSetForEachCallback(v8::Local<v8::Function>, ScriptState*);

    ScopedPersistent<v8::Function> m_callback;
    RefPtr<ScriptState> m_scriptState;
};

}
#endif // V8FontFaceSetForEachCallback_h
