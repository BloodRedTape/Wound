#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Airplane.generated.h"

UCLASS()
class WOUND_API AAirplane : public APawn{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, Category="Movement")
	float ForwardSpeed = 100.0f;	

	UPROPERTY(EditAnywhere, Category="Movement")
	float YawSpeed = 1.0f;	
public:
	AAirplane();

	void BeginPlay() override;

	void Tick(float DeltaTime) override;

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	void Yaw(float Amount);
};
