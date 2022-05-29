# C를 활용한 `구슬탈출` 콘솔게임
🔮미림 전공동아리 CPU에서 C를 이용해서 만든 구슬탈출 게임입니다 [IT쇼's Game]🔮


## 메인화면
![image](https://user-images.githubusercontent.com/83990943/165204456-b155438e-de61-4e52-bab1-58d71eab7b7a.png)

```
사방이 꽉 막힌 음산한 기운을 풍기는 방~!  
구슬을 움직여서 주어진 시간 내에 미로를 탈출하는 게임입니다.
```

- 조작법
    - 클릭(엔터) —> 스페이스(space)바
    - 위로가기 —> w
    - 아래로 가기 —> s
    - 오른쪽 이동 —> d
    - 왼쪽 이동 —> a
 - 아이템
    - 구슬(플레이어) : @
    - 키 : *
    - 문 : +
    - 탈출구 : O
- 구성
    - 현재 위치
    - 열쇠 개수

## 맵 선택 화면
![image](https://user-images.githubusercontent.com/83990943/165204495-4fa9d528-d2ce-4108-8365-8c4b46903c22.png)

## Level 1
![image](https://user-images.githubusercontent.com/83990943/165204656-cac0a93b-854c-4a7d-9901-48715d42266c.png)


```
쉬운맵을 선택(스페이스바)하면 맵이 열림
```
## Level 2
![image](https://user-images.githubusercontent.com/83990943/163717834-d50734e7-f240-48ae-811e-ac25db1007a4.png)


## Level 3
![image](https://user-images.githubusercontent.com/83990943/163717880-374fcbfb-d8eb-4c2d-91fe-ca40fa22c82c.png)

## 레벨 안의 상중하 단계
> 각 레벨 안에 시간제한이 다른 맵들이 있음
![image](https://user-images.githubusercontent.com/83990943/165204623-275debcb-a0f8-438b-9fda-f147a9911faa.png)


## 게임 조작방법(with 쉬운맵)
![Untitled](https://user-images.githubusercontent.com/83990943/158149197-74d689b9-507f-4d49-971b-da631b56e0e1.png)
```
방향키(w,s,d,a)를 움직여서 키(*)를 획득한다.
키(*)를 획득하면 하단에 획득한 열쇠 개수가 업데이트 된다.
```
![Untitled](https://user-images.githubusercontent.com/83990943/158149297-2e46e028-a68a-476b-993b-eeeef3136a85.png)
```
열쇠를 획득하고 플레이어(@)가 문(+)에 닿으면 문이 열린다.
문이 열린 개수만큼 열쇠가 사라진다.
```

![Untitled](https://user-images.githubusercontent.com/83990943/158149445-136cd0c7-9061-4cbe-84f9-52483ce8bf26.png)
```
문을 모두 열고 탈출구(O)에 닿으면 게임이 끝난다.
단 시간제한 5초 이내에 탈출해야한다!
```

## 게임 종료화면
![image](https://user-images.githubusercontent.com/83990943/163717916-d7d8cd46-c67d-4629-b2f4-dac8930f1e15.png)


## 게임 오버화면
> 제한 시간 내에 탈출을 실패했을 때 나오는 화면

![image](https://user-images.githubusercontent.com/83990943/163506999-43f86397-fcb1-4930-ac1f-49a09795d40b.png)

