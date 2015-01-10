#include "transactions/TransactionFrame.h"

namespace stellar
{
    class SetOptionsFrame : public TransactionFrame
    {
        int32_t getNeededThreshold();
    public:
        SetOptionsFrame(const TransactionEnvelope& envelope);

        bool doApply(TxDelta& delta, LedgerMaster& ledgerMaster);
        bool doCheckValid(Application& app);
    };
}