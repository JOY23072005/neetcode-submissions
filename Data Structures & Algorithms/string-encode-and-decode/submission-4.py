class Solution:

    def encode(self, strs: List[str]) -> str:
        st=""
        for i in strs:
            st += i + "JOY"
        return st

    def decode(self, s: str) -> List[str]:
        return s.split("JOY")[:-1]
