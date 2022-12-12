#pragma once

#include <stdint.h>

namespace Daedalus {

class VertexBuffer
{
public:
	static std::unique_ptr<VertexBuffer> Create(uint32_t size);
	static std::unique_ptr<VertexBuffer> Create(float* vertices, uint32_t size);

	virtual ~VertexBuffer() = default;

	virtual void Bind() const = 0;
	virtual void Unbind() const = 0;

	virtual void SetData(const void* data, uint32_t size) = 0;
};

}