#pragma once

namespace pssl
{;


enum PsslProgramType
{
	PixelShader = 0,
	VertexShader = 1,
	GeometryShader = 2,
	HullShader = 3,
	DomainShader = 4,
	ComputeShader = 5,
	UnknownShader = 0xFFFFFFFF
};


}  // namespace pssl
