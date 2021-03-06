/*
 * MockObserver.h
 *
 * Copyright 2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#ifndef ALEXA_CLIENT_SDK_CAPABILITY_AGENTS_AIP_INCLUDE_AIP_TEST_MOCK_OBSERVER_H_
#define ALEXA_CLIENT_SDK_CAPABILITY_AGENTS_AIP_INCLUDE_AIP_TEST_MOCK_OBSERVER_H_

#include <gmock/gmock.h>

#include <AVSCommon/SDKInterfaces/AudioInputProcessorObserverInterface.h>

namespace alexaClientSDK {
namespace capabilityAgents {
namespace aip {
namespace test {

/// Mock class that implements the Observer.
class MockObserver : public avsCommon::sdkInterfaces::AudioInputProcessorObserverInterface {
public:
    MOCK_METHOD1(onStateChanged, void(avsCommon::sdkInterfaces::AudioInputProcessorObserverInterface::State state));
};

}  // namespace test
}  // namespace aip
}  // namespace capabilityAgents
}  // namespace alexaClientSDK

#endif  // ALEXA_CLIENT_SDK_CAPABILITY_AGENTS_AIP_INCLUDE_AIP_TEST_MOCK_OBSERVER_H_
