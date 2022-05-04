#include "Airplane.h"

AAirplane::AAirplane(){
	PrimaryActorTick.bCanEverTick = true;
}

void AAirplane::Tick(float DeltaTime){
	Super::Tick(DeltaTime);

	SetActorLocation(GetActorLocation() + GetActorForwardVector() * ForwardSpeed * DeltaTime);
}

void AAirplane::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent){
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis(TEXT("Yaw"), this, &AAirplane::Yaw);
}

void AAirplane::Yaw(float Amount){
	SetActorRotation(GetActorRotation() + FRotator(0.0f, Amount * YawSpeed, 0.0f));
}

