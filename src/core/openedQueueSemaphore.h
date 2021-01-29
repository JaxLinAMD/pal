/*
 ***********************************************************************************************************************
 *
 *  Copyright (c) 2014-2021 Advanced Micro Devices, Inc. All Rights Reserved.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 *
 **********************************************************************************************************************/

#pragma once

#include "core/queueSemaphore.h"

namespace Pal
{

class MasterQueueSemaphore;

// =====================================================================================================================
// Specialization of QueueSemaphore to handle Semaphores for the "slave" Semaphore for multi-GPU shared Semaphore
// objects.
class OpenedQueueSemaphore final : public QueueSemaphore
{
public:
    explicit OpenedQueueSemaphore(Device* pDevice);
    virtual ~OpenedQueueSemaphore() { }

    virtual Result Open(const QueueSemaphoreOpenInfo& openInfo) override;

    virtual Result Signal(Queue* pQueue, uint64 value) override;
    virtual Result Wait(
        Queue*         pQueue,
        uint64         value,
        volatile bool* pIsStalled) override;
    virtual Result SignalSemaphoreValue(uint64  value) override;

    // NOTE: Part of the public IQueueSemaphore interface.
    virtual bool HasStalledQueues() override;

private:
    MasterQueueSemaphore*  m_pMaster;

    PAL_DISALLOW_DEFAULT_CTOR(OpenedQueueSemaphore);
    PAL_DISALLOW_COPY_AND_ASSIGN(OpenedQueueSemaphore);
};

} // Pal
