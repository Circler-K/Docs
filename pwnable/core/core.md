# Core

- LOB를 풀면서 처음에 많이 헷갈렸던 것이다. 
- 별거 없는데 그냥 까먹지 않기 위해 작성한다.

> segmentation fault (core dumped)

- 이 메세지가 뜨고 core파일이 덤프되면 core파일을 이용하여 분석을 한다.  
이 때 core파일은 오류났을 때의 메모리상황을 덤프한 파일이다.  
BOF때문에 segmentation fault (core dumped) 가 뜨게되면 주로 SFP를 덮고 RET주소를 침범했을 때 일어난다.