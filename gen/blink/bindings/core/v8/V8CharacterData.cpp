// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8CharacterData.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/UnionTypesCore.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Element.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ChildNode.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/NonDocumentTypeChildNode.h"
#include "core/dom/custom/CustomElementProcessingStack.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8CharacterData::wrapperTypeInfo = { gin::kEmbedderBlink, V8CharacterData::domTemplate, V8CharacterData::refObject, V8CharacterData::derefObject, V8CharacterData::trace, 0, 0, V8CharacterData::preparePrototypeObject, V8CharacterData::installConditionallyEnabledProperties, "CharacterData", &V8Node::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CharacterData.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& CharacterData::s_wrapperTypeInfo = V8CharacterData::wrapperTypeInfo;

namespace CharacterDataV8Internal {

static void dataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CharacterData* impl = V8CharacterData::toImpl(holder);
    v8SetReturnValueString(info, impl->data(), info.GetIsolate());
}

static void dataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CharacterDataV8Internal::dataAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void dataAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CharacterData* impl = V8CharacterData::toImpl(holder);
    V8StringResource<TreatNullAsNullString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setData(cppValue);
}

static void dataAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CharacterDataV8Internal::dataAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CharacterData* impl = V8CharacterData::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CharacterDataV8Internal::lengthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void previousElementSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CharacterData* impl = V8CharacterData::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(NonDocumentTypeChildNode::previousElementSibling(*impl)), impl);
}

static void previousElementSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CharacterDataV8Internal::previousElementSiblingAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void previousElementSiblingAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CharacterData* impl = V8CharacterData::toImpl(holder);
    v8SetReturnValueForMainWorld(info, WTF::getPtr(NonDocumentTypeChildNode::previousElementSibling(*impl)));
}

static void previousElementSiblingAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CharacterDataV8Internal::previousElementSiblingAttributeGetterForMainWorld(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void nextElementSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CharacterData* impl = V8CharacterData::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(NonDocumentTypeChildNode::nextElementSibling(*impl)), impl);
}

static void nextElementSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CharacterDataV8Internal::nextElementSiblingAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void nextElementSiblingAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CharacterData* impl = V8CharacterData::toImpl(holder);
    v8SetReturnValueForMainWorld(info, WTF::getPtr(NonDocumentTypeChildNode::nextElementSibling(*impl)));
}

static void nextElementSiblingAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CharacterDataV8Internal::nextElementSiblingAttributeGetterForMainWorld(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void substringDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "substringData", "CharacterData", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    CharacterData* impl = V8CharacterData::toImpl(info.Holder());
    unsigned offset;
    unsigned count;
    {
        offset = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        count = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    String result = impl->substringData(offset, count, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueString(info, result, info.GetIsolate());
}

static void substringDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CharacterDataV8Internal::substringDataMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void appendDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "appendData", "CharacterData", 1, info.Length()), info.GetIsolate());
        return;
    }
    CharacterData* impl = V8CharacterData::toImpl(info.Holder());
    V8StringResource<> data;
    {
        data = info[0];
        if (!data.prepare())
            return;
    }
    impl->appendData(data);
}

static void appendDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CharacterDataV8Internal::appendDataMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void insertDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "insertData", "CharacterData", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    CharacterData* impl = V8CharacterData::toImpl(info.Holder());
    unsigned offset;
    V8StringResource<> data;
    {
        offset = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        data = info[1];
        if (!data.prepare())
            return;
    }
    impl->insertData(offset, data, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void insertDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CharacterDataV8Internal::insertDataMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void deleteDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "deleteData", "CharacterData", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    CharacterData* impl = V8CharacterData::toImpl(info.Holder());
    unsigned offset;
    unsigned count;
    {
        offset = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        count = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->deleteData(offset, count, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void deleteDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CharacterDataV8Internal::deleteDataMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void replaceDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "replaceData", "CharacterData", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 3)) {
        setMinimumArityTypeError(exceptionState, 3, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    CharacterData* impl = V8CharacterData::toImpl(info.Holder());
    unsigned offset;
    unsigned count;
    V8StringResource<> data;
    {
        offset = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        count = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        data = info[2];
        if (!data.prepare())
            return;
    }
    impl->replaceData(offset, count, data, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void replaceDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CharacterDataV8Internal::replaceDataMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void beforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "before", "CharacterData", info.Holder(), info.GetIsolate());
    CharacterData* impl = V8CharacterData::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HeapVector<NodeOrString> nodes;
    {
        nodes = toImplArguments<HeapVector<NodeOrString>>(info, 0, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ChildNode::before(*impl, nodes, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void beforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CharacterDataV8Internal::beforeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void afterMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "after", "CharacterData", info.Holder(), info.GetIsolate());
    CharacterData* impl = V8CharacterData::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HeapVector<NodeOrString> nodes;
    {
        nodes = toImplArguments<HeapVector<NodeOrString>>(info, 0, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ChildNode::after(*impl, nodes, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void afterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CharacterDataV8Internal::afterMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void replaceWithMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "replaceWith", "CharacterData", info.Holder(), info.GetIsolate());
    CharacterData* impl = V8CharacterData::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HeapVector<NodeOrString> nodes;
    {
        nodes = toImplArguments<HeapVector<NodeOrString>>(info, 0, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ChildNode::replaceWith(*impl, nodes, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void replaceWithMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CharacterDataV8Internal::replaceWithMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void removeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "remove", "CharacterData", info.Holder(), info.GetIsolate());
    CharacterData* impl = V8CharacterData::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    ChildNode::remove(*impl, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void removeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CharacterDataV8Internal::removeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace CharacterDataV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8CharacterDataAccessors[] = {
    {"data", CharacterDataV8Internal::dataAttributeGetterCallback, CharacterDataV8Internal::dataAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"length", CharacterDataV8Internal::lengthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"previousElementSibling", CharacterDataV8Internal::previousElementSiblingAttributeGetterCallback, 0, CharacterDataV8Internal::previousElementSiblingAttributeGetterCallbackForMainWorld, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"nextElementSibling", CharacterDataV8Internal::nextElementSiblingAttributeGetterCallback, 0, CharacterDataV8Internal::nextElementSiblingAttributeGetterCallbackForMainWorld, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8CharacterDataMethods[] = {
    {"substringData", CharacterDataV8Internal::substringDataMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"appendData", CharacterDataV8Internal::appendDataMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"insertData", CharacterDataV8Internal::insertDataMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"deleteData", CharacterDataV8Internal::deleteDataMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"replaceData", CharacterDataV8Internal::replaceDataMethodCallback, 0, 3, V8DOMConfiguration::ExposedToAllScripts},
    {"remove", CharacterDataV8Internal::removeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8CharacterDataTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "CharacterData", V8Node::domTemplate(isolate), V8CharacterData::internalFieldCount,
        0, 0,
        V8CharacterDataAccessors, WTF_ARRAY_LENGTH(V8CharacterDataAccessors),
        V8CharacterDataMethods, WTF_ARRAY_LENGTH(V8CharacterDataMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        const V8DOMConfiguration::MethodConfiguration beforeMethodConfiguration = {
            "before", CharacterDataV8Internal::beforeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, beforeMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        const V8DOMConfiguration::MethodConfiguration afterMethodConfiguration = {
            "after", CharacterDataV8Internal::afterMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, afterMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        const V8DOMConfiguration::MethodConfiguration replaceWithMethodConfiguration = {
            "replaceWith", CharacterDataV8Internal::replaceWithMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, replaceWithMethodConfiguration);
    }

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8CharacterData::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CharacterDataTemplate);
}

bool V8CharacterData::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CharacterData::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CharacterData* V8CharacterData::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8CharacterData::preparePrototypeObject(v8::Isolate* isolate, v8::Local<v8::Object> prototypeObject, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    v8::Local<v8::Context> v8Context(prototypeObject->CreationContext());
    v8::Local<v8::Name> unscopablesSymbol(v8::Symbol::GetUnscopables(isolate));
    v8::Local<v8::Object> unscopeables;
    if (v8CallBoolean(prototypeObject->HasOwnProperty(v8Context, unscopablesSymbol)))
        unscopeables = prototypeObject->Get(v8Context, unscopablesSymbol).ToLocalChecked().As<v8::Object>();
    else
        unscopeables = v8::Object::New(isolate);
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        unscopeables->CreateDataProperty(v8Context, v8AtomicString(isolate, "after"), v8::True(isolate)).FromJust();
    }
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        unscopeables->CreateDataProperty(v8Context, v8AtomicString(isolate, "before"), v8::True(isolate)).FromJust();
    }
    unscopeables->CreateDataProperty(v8Context, v8AtomicString(isolate, "remove"), v8::True(isolate)).FromJust();
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        unscopeables->CreateDataProperty(v8Context, v8AtomicString(isolate, "replaceWith"), v8::True(isolate)).FromJust();
    }
    prototypeObject->CreateDataProperty(v8Context, unscopablesSymbol, unscopeables).FromJust();
}

void V8CharacterData::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<CharacterData>()->ref();
#endif
}

void V8CharacterData::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<CharacterData>()->deref();
#endif
}

} // namespace blink