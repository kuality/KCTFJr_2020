# Summer Song





문제 : favorite_song.zip

출제의도 : python의 모듈 qrtools를 사용할 줄 아는가?



zip파일을 보면 100개의 QR코드가 있는 것을 볼 수 있다. 



QR코드 안의 내용을 인식해주는 파이썬 모듈인 qrtools를 이용해 간단한 코드를 작성해보았다.



```python
from qrtools import QR

for i in range(0, 101):
    my_QR = QR(filename = "/qrcodes/frame"+str(i)+".png")
    my_QR.decode()
    
    print my_QR.data
```



실행 내용을 확인할 수 있고, 이를 확인해보면 의미있는 url은 https://www.youtube.com/watch?v=x9-TIy7WPQI 라는 URL밖에 없다.(다른건 학교 홈페이지랑 의미없는 문자열밖에 안넣어놓음,,) 따라서 flag는


![shake_it](./shake_it.png)


***KCTFJr{SHAKE_IT}***



> 이건 몰랐던건데 삼성 카메라에서 카메라에 사진을 가져다대기만해도 내용이 아예 뜨는줄 몰랐다. 그래서 다들 그냥 노가다뛴듯.... 애초에 qrtools모르면 노가다뛰라고 일부러 100개만 삽입한거긴 하다만 다음에 문제출제를 할때는 출제의도를 좀 적는걸로..
