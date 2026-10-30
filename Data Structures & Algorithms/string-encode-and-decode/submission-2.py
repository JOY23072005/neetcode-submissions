class Solution:

    def encode(self, strs: List[str]) -> str:
        st=""
        for i in strs:
            st += i + "LUND"
        return st

    def decode(self, s: str) -> List[str]:
        return s.split("LUND")[:-1]
