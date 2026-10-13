def circus_parade_lineup(performers: list[str] | str) -> str:
    """
    Input formats:
      1) ["a1-Animal Riding", "b2-Balancing", ...]
      2) ["a1-Animal Riding, b2-Balancing, ..."]  (single comma-separated string)
      3) "a1-Animal Riding, b2-Balancing, ..."    (single string)

    Returns: "a1, b2, c3, d4" sorted by performer name (right side of '-').
    """
    if isinstance(performers, str):
        items = [part.strip() for part in performers.split(",") if part.strip()]
    else:
        items = performers
        if len(items) == 1 and "," in items[0]:
            items = [part.strip() for part in items[0].split(",") if part.strip()]

    def get_name(item: str) -> str:
        return item.split("-", 1)[1].strip()

    codes = [s.split("-", 1)[0].strip() for s in sorted(items, key=get_name)]
    return ", ".join(codes)


if __name__ == "__main__":
    print(circus_parade_lineup(["a1-Animal Riding, b2-Balancing, c3-Clowning, d4-Dancing"]))
