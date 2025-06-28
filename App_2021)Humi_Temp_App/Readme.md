# 2021년 보드를 이용한 Application
## 올해는 다르게 더 해보겠습니다



- Cube IDE를 이용한 Firmware 학습
- 참고도서 
  STM32 CubeIDE를 이용한 STM32 따라하기
  저자 : 김남수, 이진형
  사용 보드 : 헤디 NUCLEOEVB 보드 & Nucleo-F103RB
- 목표
  현재 NUCLEOEVB에 있는 대부분의 기능 사용을 목표로 한다.
- 기능
  - LED & SW
    스위치에 따라 LED 패턴의 변화를 진행한다.
  - RGB Color LED
    RGB에서 G은 오염도를 기록 할 수 있으나 미세먼지 센서등을 구입해야 하므로
    온습도 센서만을 이용하여 R과 B만 사용, 상태에 따른  Pulse Width 변화로 LED의
    밝기를 변환, 상태를 쉽게 알아보기 위해 교차 진행할 수 있도록 함.|
    R : 온도(섭씨) B : 습도(%)
  - CLCD
    사용자가 대략적인 상태보다 상세한 상태를 확인하고 싶을 경우를 대비,
    CLCD에 온습도센서가 측정한 현재 상태를 기록한다.
  - Interrupt
    LED 패턴 변화를 위한 Timer Interrupt, 스위치 Edge에 의한 Interrupt 를 검출, 변환하기 위해
    사용하였음.
  - PWM
    RGB LED를 위해 사용, 온습도 상태에 따른 밝기 조절
