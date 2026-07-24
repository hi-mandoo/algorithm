## JadenCase 문자열 만들기

- [문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/12951)

## 코드

```java
class Solution {
    public String solution(String s) {
        StringBuilder sb = new StringBuilder(String.valueOf(Character.toUpperCase(s.charAt(0))));

        for (int i = 1; i < s.length(); i++) {
            if (s.charAt(i - 1) == ' ') sb.append(Character.toUpperCase(s.charAt(i)));
            else sb.append(Character.toLowerCase(s.charAt(i)));
        }

        return sb.toString();
    }
}
```
