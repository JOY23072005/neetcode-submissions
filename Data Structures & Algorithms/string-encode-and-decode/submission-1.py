class Solution:

    def encode(self, strs: List[str]) -> str:
        st=""
        for i in strs:
            st += i + " "
        return st

    def decode(self, s: str) -> List[str]:
        return s.split(" ")[:-1]
