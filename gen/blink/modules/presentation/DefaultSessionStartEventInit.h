// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef DefaultSessionStartEventInit_h
#define DefaultSessionStartEventInit_h

#include "core/events/EventInit.h"
#include "modules/ModulesExport.h"
#include "modules/presentation/PresentationSession.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT DefaultSessionStartEventInit : public EventInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    DefaultSessionStartEventInit();

    bool hasSession() const { return m_session; }
    PresentationSession* session() const { return m_session; }
    void setSession(PresentationSession* value) { m_session = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Member<PresentationSession> m_session;

    friend class V8DefaultSessionStartEventInit;
};

} // namespace blink

#endif // DefaultSessionStartEventInit_h
