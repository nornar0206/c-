# c-

## Use ssh cloning when you clone the project

---
https://velog.io/@jytrack/Git-Error-fatal-in-unpopulated-submodule-...-%ED%95%B4%EA%B2%B0%ED%95%98%EA%B8%B0
---
# 0. Errors
>git을 ssh로 cloning한 후 commit을 하려는데 오류가 발생하였다.
>>fatal: in unpopulated submodule ...
>>>아마 /home/username 에서 cloning을 했는데 복제된 파일 안에 .git 폴더가 있어서 생긴 문제인 듯 싶다.
>>>>```git rm --cached . -rf```
>>>>>관련 오류를 발생시키는 하위 파일들을 모두 삭제하여 오류 해결.
