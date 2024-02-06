#pragma once

namespace Debug
{
	// this will print string 
	static void print(const FString& Message, const FColor& Color = FColor::MakeRandomColor(), int32 In_Key = -1)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(In_Key,6.f, Color, Message);
		}

		UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);
	}

}