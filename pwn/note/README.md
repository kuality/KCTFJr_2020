데이터를 입력받을 사이즈를 입력하는데 음수 체크를 하지 않음 <br>
read함수에서 size인자는 unsigned int로 들어감 <br>
보호기법을 확인하면 NX가 걸려있지 않고 스택의 주소를 알 수 있기 때문에 shellcode를 스택에 넣고 ret에 shellcode가 있는 주소로 덮음<br>
