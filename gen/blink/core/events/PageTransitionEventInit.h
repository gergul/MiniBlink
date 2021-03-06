// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef PageTransitionEventInit_h
#define PageTransitionEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/events/EventInit.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT PageTransitionEventInit : public EventInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    PageTransitionEventInit();

    bool hasPersisted() const { return !m_persisted.isNull(); }
    bool persisted() const { return m_persisted.get(); }
    void setPersisted(bool value) { m_persisted = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_persisted;

    friend class V8PageTransitionEventInit;
};

} // namespace blink

#endif // PageTransitionEventInit_h
