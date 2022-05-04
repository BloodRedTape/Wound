#include "Airplane.h"

AAirplane::AAirplane(){
	PrimaryActorTick.bCanEverTick = true;
}

void AAirplane::Tick(float DeltaTime){
	Super::Tick(DeltaTime);

	SetActorLocation(GetActorLocation() + GetActorForwardVector() * ForwardSpeed * DeltaTime);
	
	float YawAmount = YawInput * YawSpeed * DeltaTime;

	SetActorRotation(GetActorRotation() + FRotator(0.f, YawAmount, 0.f));

	YawInput -= YawAmount;
}

void AAirplane::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent){
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis(TEXT("Yaw"), this, &AAirplane::Yaw);
}

void AAirplane::Yaw(float Amount){
	YawInput += Amount;
}

